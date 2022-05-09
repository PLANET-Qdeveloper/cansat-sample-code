from gps_lib import GPS # ライブラリを使うためにインポートしてるよ
gps = GPS(0,1,115200) # インスタンスの生成。rx, tx, baudrateを設定
while True:
    if(gps.available()):    # 生成したインスタンスが正常であるかどうかチェックしているよ
        print(gps.read_data())  # ライブラリに入っている関数read_data()を呼び出してプリントしているよ
