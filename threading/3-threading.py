import time
import concurrent.futures

start = time.perf_counter()


def do_something(seconds):
    print(f'sleeping {seconds} seconds')
    time.sleep(seconds)
    return f'done {seconds}'
    
    
with concurrent.futures.ThreadPoolExecutor() as executor:
    secs = [5, 4, 3, 2, 1]
    results = [executor.submit(do_something, secs) for secs in range(10)]                     
    
    for f in concurrent.futures.as_completed(results):
        print(f.result)
    
    # print(results.result())
    
# threads = []
    
# for _ in range(10):
#     t = threading.Thread(target=do_something, args=[1.5])
#     t.start()
#     threads.append(t)
    
# for thread in threads:
#     thread.join()
    
finish = time.perf_counter()
print(f'finished in {round(finish-start, 2)} seconds')