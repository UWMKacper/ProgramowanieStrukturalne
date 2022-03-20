import random
import time

def quick_sort_0(array):
    if len(array)<2:
        return array
    else:
        pos = 0
        pivot = array[pos]
        less = [i for i in array[pos+1:] if i <= pivot]
        greater = [i for i in array[pos+1:] if i > pivot]
        
        global liczba_operacji
        liczba_operacji += 1

        return quick_sort_0(less) + [pivot] + quick_sort_0(greater)

def quick_sort_random(array):
    if len(array)<2:
        return array
    else:
        pos = random.randrange(0,len(array)-1)
        pivot = array[pos]
        less = [i for i in array[pos+1:] if i <= pivot]
        greater = [i for i in array[pos+1:] if i > pivot]
        
        global liczba_operacji
        liczba_operacji += 1

        return quick_sort_random(less) + [pivot] + quick_sort_random(greater)


liczba_operacji = 1
# test na poprawność działania
print("Sortowanie zadanego zbioru:")
array = [4,1,5,8,4,7,4,3,8,9,6,4,4,2,5,7,4]

print(f"Array przed: {array}")

new_array = quick_sort_0(array)

print(f"Array po:    {new_array}")
print("\n"+"#"*70)

# 1)pomiar czasu i ilości obliczeń potrzebnych do posortowania zbioru
print("\nSorotowanie w momecie gdy element osiowy będzie zawsze pierwszym elementem danego zbioru:")
statystyka = []
liczba_operacji = 1

for i in range(5):
    print("Tworzenie listy w toku...")
    array = [random.randrange(1,10000) for i in range(300000)]
    print("Czas start!")
    start = time.time()
    quick_sort_0(array)
    stop = time.time()
    print("Czas stop!")
    pomiar = stop-start
    print(f"Czas: {pomiar}\n")
    statystyka.append(pomiar)

print(f"Czasy: {statystyka}")
print(f"Średni czas: {round(sum(statystyka)/len(statystyka),2)}")

print("Liczba wykonanych operacji: ", liczba_operacji)

print("\n"+"#"*70)

# 2)pomiar czasu i ilości obliczeń potrzebnych do posortowania zbioru
print("\nSorotowanie w momecie gdy element osiowy będzie losowym elementem danego zbioru:")
statystyka = []
liczba_operacji = 1

for i in range(5):
    print("Tworzenie listy w toku...")
    array = [random.randrange(1,10000) for i in range(300000)]
    print("Czas start!")
    start = time.time()
    quick_sort_random(array)
    stop = time.time()
    print("Czas stop!")
    pomiar = stop-start
    print(f"Czas: {pomiar}\n")
    statystyka.append(pomiar)

print(f"Czasy: {statystyka}")
print(f"Średni czas: {round(sum(statystyka)/len(statystyka),2)}")

print("Liczba wykonanych operacji: ", liczba_operacji)


















