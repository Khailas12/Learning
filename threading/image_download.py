import concurrent.futures
import requests
import time


image_urls = [
    'https://images.unsplash.com/photo-1516117172878-fd2c41f4a759',
    'https://images.unsplash.com/photo-1532009324734-20a7a5813719',
    'https://images.unsplash.com/photo-1524429656589-6633a470097c',
    'https://images.unsplash.com/photo-1530224264768-7ff8c1789d79',
    'https://images.unsplash.com/photo-1564135624576-c5c88640f235',
    'https://images.unsplash.com/photo-1541698444083-023c97d3f4b6',
    'https://images.unsplash.com/photo-1522364723953-452d3431c267',
]

start_time = time.perf_counter()

def download_image(img_url):
    img_bytes = requests.get(img_url).content
    img_name = img_url.split('/')[3]
    img_name = f'{img_name}.jpg'
    
    with open(img_name, 'wb') as img_file:
        img_file.write(img_bytes)
        print(f'{img_name} downloaded..!')
    
with concurrent.futures.ThreadPoolExecutor() as executor:
    executor.map(download_image, image_urls)

end_time = time.perf_counter()
total_time = end_time - start_time

print(f'Finished within {total_time} seconds')