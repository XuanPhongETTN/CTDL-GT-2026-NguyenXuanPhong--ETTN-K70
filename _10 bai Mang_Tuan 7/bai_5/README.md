Tên bài
Dịch chuyển toàn bộ các số 0 về cuối mảng (Move all zeros present in the array to the end)

Ý tưởng
Sử dụng kỹ thuật duyệt mảng với một biến con trỏ phụ để đánh dấu vị trí ghi các phần tử khác 0.Duyệt qua từng phần tử của mảng bằng biến i. Nếu arr[i] khác 0, ta ghi đè giá trị này vào vị trí k (arr[k] = arr[i]) và tăng k lên 1.Quá trình này sẽ dồn tất cả các số khác 0 lên đầu mảng mà vẫn giữ nguyên thứ tự ban đầu của chúng. Lúc này, biến k sẽ nằm ở vị trí ngay sau phần tử khác 0 cuối cùng.Dùng một vòng lặp thứ hai chạy từ vị trí k đến cuối mảng, gán toàn bộ các phần tử tại các vị trí này thành 0.

Mô tả dữ liệu kiểm thử
Test Case 1:Input: 
arr = [6, 0, 8, 2, 3, 0, 4, 0, 1]
Output: 6 8 2 3 4 1 0 0 0
Test Case 2:
Input: arr = [0, 0, 0]
Output: 0 0 0
Test Case 3:
Input: arr = [1, 2, 3]
Output: 1 2 3