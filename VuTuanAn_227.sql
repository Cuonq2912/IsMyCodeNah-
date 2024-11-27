create database QLBanHang
go

use QLBanHang
go

create table SanPham
(MaSP char(10) PRIMARY KEY,
MaHangSX CHAR(10),
TenSP NVARCHAR(100), 
SoLuong INT, 
MauSac NVARCHAR(10), 
GiaBan MONEY, 
DonViTinh NVARCHAR(10),
MoTa NVARCHAR(50)
)


CREATE TABLE HangSX
(MaHangSX CHAR(10) PRIMARY KEY, 
TenHang NVARCHAR(25) , 
DiaChi NVARCHAR(50), 
SoDT CHAR(11),
Email CHAR(25)
)

CREATE TABLE NhanVien
(MaNV CHAR(10) PRIMARY KEY,
TenNV NVARCHAR(50) ,
GioiTinh NVARCHAR(5),
DiaChi NVARCHAR(50),
SoDT CHAR(11),
Email CHAR(25),
TenPhong NVARCHAR(30)
)

CREATE TABLE PNhap
(SoHDN CHAR(10) PRIMARY KEY,
NgayNhap DATE,
MaNV CHAR(10)
)

CREATE TABLE Nhap
(SoHDN CHAR(10), 
MaSP CHAR(10),
SoLuongN INT,
DonGiaN MONEY
PRIMARY KEY (SoHDN,MaSP),
FOREIGN KEY (SoHDN) REFERENCES dbo.PNhap(SoHDN),
FOREIGN KEY (MaSP) REFERENCES dbo.SanPham(MaSP)

)
CREATE TABLE PXuat
(SoHDX CHAR(10) PRIMARY KEY,
NgayXuat DATE,
MaNV CHAR(10)
)

CREATE TABLE Xuat
(SoHDX CHAR(10) ,
MaSP CHAR(10) , 
SoLuongX INT
PRIMARY KEY (SoHDX,MaSP)
FOREIGN KEY (SoHDX) REFERENCES dbo.PXuat(SoHDX),
FOREIGN KEY (MaSP) REFERENCES dbo.SanPham(MaSP),
)


SELECT *FROM dbo.SanPham
SELECT *FROM dbo.HangSX
SELECT *FROM dbo.NhanVien
SELECT *FROM dbo.Nhap
SELECT *FROM dbo.PNhap
SELECT *FROM dbo.Xuat
SELECT *FROM dbo.PNhap


select sum(n.DonGiaN) as N'tổng số tiền đã xuất'
from dbo.Nhap as n,dbo.PXuat as px
where px.NgayXuat='2020/06/14'

