import threading
import requests

def send_request(url, num_requests):
    for _ in range(num_requests):
        try:
            response = requests.get(url)
            print(f"Respuesta HTTP: {response.status_code}")
        except Exception as e:
            print(f"Error: {e}")

def main():
    url = "http://ejemplo.com"  # ¡Cambia esto a una URL autorizada!
    num_threads = 5  # Número de hilos
    requests_per_thread = 10  # Solicitudes por hilo

    threads = []
    for _ in range(num_threads):
        thread = threading.Thread(target=send_request, args=(url, requests_per_thread))
        threads.append(thread)
        thread.start()

    for thread in threads:
        thread.join()

if _name_ == "_main_":
    main()