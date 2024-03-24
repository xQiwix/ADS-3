// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
return 0; // если ничего не найдено
  int left = 0;
  int right = size - 1;
  int cnt = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == value) {
            cnt++;
            int i = mid - 1;
            while (i >= 0 && arr[i] == value) {
                cnt++;
                i--;
            }
            int j = mid + 1;
            while (j < size && arr[j] == value) {
                cnt++;
                j++;
            }
            return cnt;
        } else if (arr[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
  return 0;
}
