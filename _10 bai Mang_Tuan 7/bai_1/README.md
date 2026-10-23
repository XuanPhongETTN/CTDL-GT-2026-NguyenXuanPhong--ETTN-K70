Bài toán: Tìm hai phần tử trong mảng có tổng bằng một giá trị cho trước. 

Ý tưởng: Dùng 2 vòng lặp lồng nhau duyệt qua mọi cặp phần tử trong mảng để kiểm tra tổng.
Các bước thực hiện:
1 Vòng lặp ngoài (i chạy từ 0 đến n-2) chốt phần tử thứ nhất.
2 Vòng lặp trong (j chạy từ i+1 đến n-1) chọn phần tử thứ hai để ghép cặp. Bắt đầu từ i+1 để tránh xét trùng.
3 Kiểm tra: Nếu arr[i] + arr[j] == target
4 Kết thúc lặp

Mô tả dữ liệu kiểm thử:
1,Input: arr = [1, 2, 3, 4], target = 10
Output: not found

2,input: arr = [8, 7, 2, 5, 3, 1], target = 10
Output: 2 so can tim:(8,2)