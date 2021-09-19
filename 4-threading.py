import time
import concurrent.futures


start = time.perf_counter()

def do_something(seconds):
    print(f'sleeping {seconds} seconds')
    time.sleep(1)
    return f'done {secs}'


with concurrent.futures.ThreadPoolExecutor() as executor:
    secs = [5, 4, 3, 2, 1]
    results = executor.map(do_something, secs)
    
    # for result in results:
    #     print(result)

finish = time.perf_counter()
print(f'finished in {round(finish-start, 2)} seconds')