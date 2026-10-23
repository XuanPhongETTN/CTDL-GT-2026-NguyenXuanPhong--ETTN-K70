Bài 2: Sắp xếp mảng nhị phân trong thời gian tuyến tính (Sort binary array in linear time)

Ý tưởng: Vì mảng chỉ chứa hai giá trị 0 và 1, ta không cần dùng các thuật toán sắp xếp phức tạp. Chỉ cần đếm xem có bao nhiêu số 0, sau đó ghi đè số 0 lên phần đầu của mảng, và ghi đè số 1 cho phần còn lại.
Các bước thực hiện:
Khởi tạo một biến đếm zeros = 0.
Duyệt qua mảng một lần: Nếu gặp phần tử 0, tăng biến zeros lên 1.
Duyệt mảng lần thứ hai (hoặc dùng vòng lặp gán lại):
Từ vị trí 0 đến zeros - 1: gán giá trị 0.
Từ vị trí zeros đến cuối mảng (n - 1): gán giá trị 1

Mô tả dữ liệu kiểm thử:
Input: arr = [1, 0, 1, 0, 1, 0, 0, 1]
Output: 0 0 0 0 1 1 1 1