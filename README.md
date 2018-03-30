# ClangA.D.Conversion3
西暦から和暦を割り出す

## 処理
`rand()`関数を使い西暦年を出力し、そこから昭和何年かを割り出す。

## コード
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int seireki = rand() % 63 + 1926;
    printf("西暦%d年は、", seireki);

    // 昭和年を計算
    int showa = seireki - 1925;
    printf("昭和%d年です\n", showa);
}
```

## 出力例 
```
西暦1959年は、昭和34年です
```
  
## 開発環境
| 開発ツール |  |
|:-|:-|
| OS | Windows10 |
| 仮想化ソフト | Oracle VM VirtualBox 5.2 |
| 構築ソフト | Vagrant 2.0.2 |
| 仮想化上OS | CentOS 6.9 |
| SSHクライアント | PuTTY 0.6.8 |
| FTPクライアント | Cyberduck 6.3.5 |
| エディタ | Atom 1.24.0 |
| 開発言語 | gcc 4.4.7 |
