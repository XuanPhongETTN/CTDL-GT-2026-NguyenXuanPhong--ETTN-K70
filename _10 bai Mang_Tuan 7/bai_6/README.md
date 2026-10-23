Tên bài:Tìm dãy con liên tiếp có tổng lớn nhất

Ý tưởng
Khởi tạo hai biến: max_so_far (lưu kết quả tổng lớn nhất tìm được) và max_ending_here (lưu tổng của dãy con hiện tại đang xét). Ban đầu gán cả hai bằng phần tử đầu tiên của mảng arr[0].Duyệt qua mảng bắt đầu từ phần tử thứ hai (i = 1). Tại mỗi bước, ta cập nhật max_ending_here = max_ending_here + arr[i].Điểm mấu chốt: Nếu bản thân phần tử arr[i] độc lập lại còn lớn hơn cả tổng cộng dồn max_ending_here (thường xảy ra khi mảng phía trước bị âm quá nhiều), ta vứt bỏ dãy cũ và bắt đầu tính một dãy con hoàn toàn mới từ chính vị trí arr[i].Sau mỗi bước, nếu dãy con hiện tại max_ending_here lớn hơn kỷ lục max_so_far, ta cập nhật lại max_so_far.

Mô tả dữ liệu kiểm thử
Test Case 1:
Input: arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output: 6(Giải thích: Dãy con lớn nhất là [4, -1, 2, 1] có tổng bằng 6)
Test Case 2:
Input: arr = [-8, -3, -6, -2, -5]
Output: -2(Giải thích: Dãy con lớn nhất chính là phần tử âm nhỏ nhất -2)
Test Case 3 (Mảng toàn số dương):
Input: arr = [1, 2, 3, 4]
Output: 10(Giải thích: Lấy toàn bộ mảng)