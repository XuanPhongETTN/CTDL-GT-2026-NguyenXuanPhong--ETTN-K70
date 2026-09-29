# CTDL-GT-2026-NguyenXuanPhong--ETTN-K70
Bài tập CTDL&amp;GT
Bài tập môn Cấu trúc Dữ liệu & Giải thuật - Tuần 4
Chủ đề: Bài toán Tháp Hà Nội (Đệ quy và Khử đệ quy)

Họ và tên: Nguyễn Xuân Phong
MSSV: 202514316
Lớp: ETTN-K70

1. Mô tả thuật toán

Cách 1: Thủ tục Đệ quy
Bài toán chuyển N đĩa từ cọc Nguồn sang Đích được chia thành 3 bước:
- Mượn cọc Đích, chuyển n-1 đĩa từ cọc Nguồn sang cọc Trung gian.
- Chuyển đĩa lớn nhất (đĩa thứ n) từ cọc Nguồn thẳng sang cọc Đích.
- Mượn cọc Nguồn, chuyển n-1 đĩa từ cọc Trung gian về lại cọc Đích.
Điểm dừng: Khi n = 1 , ta chuyển trực tiếp từ cọc Nguồn sang cọc Đích.

Cách 2: Khử đệ quy bằng Stack
Thay vì để hệ thống tự gọi hàm đệ quy, em sử dụng cấu trúc dữ liệu ngăn xếp khai báo bằng mảng tĩnh để tự lưu trữ và quản lý các trạng thái di chuyển (gồm: số đĩa hiện tại, cọc nguồn, cọc đích, cọc trung gian).
- Quy tắc xử lý: Đẩy trạng thái ban đầu của N đĩa vào Stack. Dùng vòng lặp while lấy từng trạng thái ra để xử lý cho đến khi Stack rỗng.
-  Vì Stack hoạt động theo nguyên tắc LIFO, để các lệnh được lấy ra thực thi đúng thứ tự 1 -> 2 -> 3 như đệ quy, quá trình push vào Stack phải làm ngược lại: push bước 3, sau đó push bước 2, và cuối cùng push bước 1.

2. Test Case kiểm tra độ chính xác

Input:
Nhập số đĩa: N = 3

Output thực tế trên Terminal:

Nhap so dia N = 3

Cac buoc di chuyen:
Chuyen dia tu cot A sang cot B
Chuyen dia tu cot A sang cot C
Chuyen dia tu cot B sang cot C
Chuyen dia tu cot A sang cot B
Chuyen dia tu cot C sang cot A
Chuyen dia tu cot C sang cot B
Chuyen dia tu cot A sang cot B