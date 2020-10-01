class HeapSort:
    def max_heapify(self, arr, node):
        if 2*node-1 < len(arr):
            if arr[node-1] < arr[2*node-1]:
                temp = arr[node-1]
                arr[node-1] = arr[2*node-1]
                arr[2*node-1] = temp
        if 2*node < len(arr):
            if arr[node-1] < arr[2*node]:
                temp = arr[node-1]
                arr[node-1] = arr[2*node]
                arr[2*node] = temp
        return arr

    def build_max_heap(self, arr):
        for node in range(len(arr)//2, 0, -1):
            arr = self.max_heapify(arr, node)
        return arr

    def sort(self, arr):
        sorted_arr = []
        arr = self.build_max_heap(arr)
        heap_size = len(arr)
        for i in range(len(arr)):
            sorted_arr.append(arr[0])
            arr[0] = arr[heap_size-1]
            heap_size -= 1
            arr = self.build_max_heap(arr[:heap_size])
        return sorted_arr


if __name__ == "__main__":
    arr = [16, 4, 10, 14, 7, 9, 3, 2, 8, 1]
    heap_sort = HeapSort()
    print(heap_sort.sort(arr))
