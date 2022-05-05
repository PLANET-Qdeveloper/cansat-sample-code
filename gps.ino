/*********************************
 * 自作ライブラリを使用しています。
 * バージョン変更があった場合は変更内容を確認し、プログラムの書き換えを行ってください。
 * このプログラムは2017/6/21時点のライブラリで作成したものです。
 *********************************/

#include <GPSLib.h> //GPS用自作ライブラリの読み込み

GPS gps; //必要

void setup() {
  gps.HardwareGPS(115200); //ハードウェアシリアルで使う場合の宣言
  //（ソフトウェアシリアル用は自分で確認してください）

  Serial.begin(115200);
}

void loop() {
  GPS_status result = gps.accessGPS(); //GPSモジュールの状態を確認
  if(result == _OK){ //確認結果が[_OK]の場合
    Serial.print('[');
    Serial.print(gps.Year()); //年を取得・表示
    Serial.print('/');
    Serial.print(gps.Month()); //月を取得・表示
    Serial.print('/');
    Serial.print(gps.Day()); //日を取得・表示
    Serial.print(' ');
    Serial.print(gps.Hour()); //時間(グリニッジ標準時)を取得・表示
    Serial.print(':');
    Serial.print(gps.Min()); //分を取得・表示
    Serial.print(']');
    Serial.print('\t');

    Serial.print("Lon : ");
    Serial.print(gps.Lon(), 8); //経度を取得・小数点以下8位まで表示
    Serial.print("\t");
    Serial.print("Lat : ");
    Serial.println(gps.Lat(), 8); //緯度を取得・小数点以下8位まで表示
  }

  else if(result == _NG){ //確認結果が[_NG]の場合（データが取得できていない）
    Serial.println("GPS_NG");
  }

  else if(result == _connection_error){ //確認結果が[_connection_error]の場合（接続できてない）
    Serial.println("Connection Error");
  }
}
