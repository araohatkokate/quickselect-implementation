def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quickselect(arr, low, high, i):
    if low == high:
        return arr[low]
    
    pivot_index = partition(arr, low, high)
    
    if pivot_index == i:
        return arr[pivot_index]
    elif pivot_index > i:
        return quickselect(arr, low, pivot_index - 1, i)
    else:
        return quickselect(arr, pivot_index + 1, high, i)

# Example usage
arr = [12, 3, 5, 7, 19, 1]
i = 3  # Find the 4th smallest element (0-based index)
result = quickselect(arr, 0, len(arr) - 1, i)
print(f"The {i + 1}th smallest element is {result}")
