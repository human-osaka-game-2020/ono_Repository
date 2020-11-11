#include "DxLib.h"
#include "Main.h"
#include "DrawManager.h"
#include <time.h>

// ================================================================================
// グローバル関数
// ================================================================================
int clearGraphHandle = -1;		// クリア画像を使うための変数

// ================================================================================
// 描画処理初期化 (ゲーム起動時に一度だけ呼び出す)
// ================================================================================
void DrawInit()
{

}

// ================================================================================
// 描画処理終了　 (ゲーム終了時、DxLib_Endの前に一度だけ呼び出す)
// ================================================================================
void DrawEnd()
{

}

// ================================================================================
// 情報文章を描画
// ================================================================================
void DrawInformation()
{
	
}

// ================================================================================
// ゲームクリアの文字を描画
// ================================================================================
void DrawGameClear()
{
	DrawGraph((WINDOW_W / 2) - 160, (WINDOW_H / 2) - 160, clearGraphHandle, TRUE);
}
