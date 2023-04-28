#ifndef GUARD_ITEM_MENU_ICONS_H
#define GUARD_ITEM_MENU_ICONS_H

extern const struct CompressedSpriteSheet gBagMaleSpriteSheet;
extern const struct CompressedSpriteSheet gBagFemaleSpriteSheet;
extern const struct CompressedSpritePalette gBagPaletteTable;
extern const struct CompressedSpriteSheet gBerryCheckCircleSpriteSheet;
extern const struct CompressedSpritePalette gBerryCheckCirclePaletteTable;

void AddBagVisualSprite(u8 bagPocketId);
void SetBagVisualPocketId(u8 bagPocketId);
void ShakeBagSprite(void);
void AddBagItemIconSprite(u16 itemId, u8 id);
void RemoveBagItemIconSprite(u8 id);
void CreateItemMenuSwapLine(void);
void SetItemMenuSwapLineInvisibility(bool8 invisible);
void UpdateItemMenuSwapLinePos(u16 x, u16 y);
u8 CreateBerryTagSprite(u8 id, s16 x, s16 y);
void FreeBerryTagSpritePalette(void);
u8 CreateSpinningBerrySprite(u8 berryId, u8 x, u8 y, bool8 startAffine);
u8 CreateBerryFlavorCircleSprite(s16 x);

enum {
    TAG_BAG_GFX = 100,
    TAG_SWAP_LINE,
    TAG_ITEM_ICON,
    TAG_ITEM_ICON_ALT,
};

extern const union AnimCmd *const gBerryPicSpriteAnimTable[];

void ResetItemMenuIconState(void);
void AddBerryPouchItemIconSprite(u16 itemId, u8 id);

extern const union AnimCmd gSpriteAnim_Bag_Closed[];

#endif // GUARD_ITEM_MENU_ICONS_H
