class MergeSort:

    def merge(self, left_arr, right_arr, arr):
        i = j = k = 0
        while i < len(left_arr) and j < len(right_arr):
            if left_arr[i] <= right_arr[j]:
                arr[k] = left_arr[i]
                i += 1
            else:
                arr[k] = right_arr[j]
                j += 1
            k += 1
        while i < len(left_arr):
            arr[k] = left_arr[i]
            i += 1
            k += 1
        while j < len(right_arr):
            arr[k] = right_arr[j]
            j += 1
            k += 1
        return arr

    def sort(self, arr):
        if len(arr) < 2:
            return arr
        mid = (len(arr))//2
        left_arr = self.sort(arr[:mid])
        right_arr = self.sort(arr[mid:])
        self.merge(left_arr, right_arr, arr)
        return arr


if __name__ == "__main__":
    arr = [5, 2, 4, 6, 1, 3]
    merge_sort = MergeSort()
    print(merge_sort.sort(arr))
