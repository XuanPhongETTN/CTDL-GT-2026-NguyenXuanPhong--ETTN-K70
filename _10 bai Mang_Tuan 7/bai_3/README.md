Bài 3: Tìm một phần tử bị lặp lại trong mảng có giới hạn (Find a duplicate element in a limited range array).

Ý tưởng:
Dùng một mảng phụ để lưu trạng thái "đã gặp hay chưa". Giá trị của phần tử sẽ được dùng làm chỉ số (index) cho mảng phụ này.Các bước thực hiện:Tạo một mảng phụ có kích thước bằng kích thước mảng đầu vào và khởi tạo tất cả phần tử bằng 0.
Duyệt qua từng phần tử trong mảng gốc arr:Nếu mangphu[arr[i]] == 1 (tức là đã gặp số này trước đó), in ra arr[i] là phần tử lặp và dừng hàm.
Nếu mangphu[arr[i]] == 0, đánh dấu visited[arr[i]] = 1 để ghi nhớ là đã gặp nó.Nếu duyệt hết mảng mà không gặp phần tử nào lặp, kết luận không có.

Mô tả dữ liệu kiểm thử:

Input: arr = [1, 2, 3, 4, 2]

Output: Phan tu lap lai la: 2

Test Case 2: Mảng có nhiều phần tử lặp khác nhau

Input: arr = [5, 3, 1, 3, 5, 4]

Output: Phan tu lap lai la: 3