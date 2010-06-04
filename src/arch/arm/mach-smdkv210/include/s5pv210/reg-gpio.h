#ifndef __S5PV210_REG_GPIO_H__
#define __S5PV210_REG_GPIO_H__

#include <configs.h>
#include <default.h>

#if 0
/* PORT A0 */
#define S5PV210_GPA0CON	 	 	(0xE0300000 + 0x000)
#define S5PV210_GPA0DAT	 	 	(0xE0300000 + 0x004)
#define S5PV210_GPA0PUD	 	 	(0xE0300000 + 0x008)
#define S5PV210_GPA0DRV	 	 	(0xE0300000 + 0x00C)
#define S5PV210_GPA0CONSLP 	 	(0xE0300000 + 0x010)
#define S5PV210_GPA0PUDSLP 	 	(0xE0300000 + 0x014)

/* PORT A1 */
#define S5PV210_GPA1CON	 	 	(0xE0300000 + 0x020)
#define S5PV210_GPA1DAT	 	 	(0xE0300000 + 0x024)
#define S5PV210_GPA1PUD	 	 	(0xE0300000 + 0x028)
#define S5PV210_GPA1DRV	 	 	(0xE0300000 + 0x02C)
#define S5PV210_GPA1CONSLP 	 	(0xE0300000 + 0x030)
#define S5PV210_GPA1PUDSLP 	 	(0xE0300000 + 0x034)

/* PORT B */
#define S5PV210_GPBCON	 	 	(0xE0300000 + 0x040)
#define S5PV210_GPBDAT	 	 	(0xE0300000 + 0x044)
#define S5PV210_GPBPUD	 	 	(0xE0300000 + 0x048)
#define S5PV210_GPBDRV	 	 	(0xE0300000 + 0x04C)
#define S5PV210_GPBCONSLP 	 	(0xE0300000 + 0x050)
#define S5PV210_GPBPUDSLP 	 	(0xE0300000 + 0x054)

/* PORT C */
#define S5PV210_GPCCON	 	 	(0xE0300000 + 0x060)
#define S5PV210_GPCDAT	 	 	(0xE0300000 + 0x064)
#define S5PV210_GPCPUD	 	 	(0xE0300000 + 0x068)
#define S5PV210_GPCDRV	 	 	(0xE0300000 + 0x06C)
#define S5PV210_GPCCONSLP 	 	(0xE0300000 + 0x070)
#define S5PV210_GPCPUDSLP 	 	(0xE0300000 + 0x074)

/* PORT D */
#define S5PV210_GPDCON	 	 	(0xE0300000 + 0x080)
#define S5PV210_GPDDAT	 	 	(0xE0300000 + 0x084)
#define S5PV210_GPDPUD	 	 	(0xE0300000 + 0x088)
#define S5PV210_GPDDRV	 	 	(0xE0300000 + 0x08C)
#define S5PV210_GPDCONSLP 	 	(0xE0300000 + 0x090)
#define S5PV210_GPDPUDSLP 	 	(0xE0300000 + 0x094)

/* PORT E0 */
#define S5PV210_GPE0CON	 	 	(0xE0300000 + 0x0A0)
#define S5PV210_GPE0DAT	 	 	(0xE0300000 + 0x0A4)
#define S5PV210_GPE0PUD	 	 	(0xE0300000 + 0x0A8)
#define S5PV210_GPE0DRV	 	 	(0xE0300000 + 0x0AC)
#define S5PV210_GPE0CONSLP 	 	(0xE0300000 + 0x0B0)
#define S5PV210_GPE0PUDSLP 	 	(0xE0300000 + 0x0B4)

/* PORT E1 */
#define S5PV210_GPE1CON	 	 	(0xE0300000 + 0x0C0)
#define S5PV210_GPE1DAT	 	 	(0xE0300000 + 0x0C4)
#define S5PV210_GPE1PUD	 	 	(0xE0300000 + 0x0C8)
#define S5PV210_GPE1DRV	 	 	(0xE0300000 + 0x0CC)
#define S5PV210_GPE1CONSLP 	 	(0xE0300000 + 0x0D0)
#define S5PV210_GPE1PUDSLP 	 	(0xE0300000 + 0x0D4)

/* PORT F0 */
#define S5PV210_GPF0CON	 	 	(0xE0300000 + 0x0E0)
#define S5PV210_GPF0DAT	 	 	(0xE0300000 + 0x0E4)
#define S5PV210_GPF0PUD	 	 	(0xE0300000 + 0x0E8)
#define S5PV210_GPF0DRV	 	 	(0xE0300000 + 0x0EC)
#define S5PV210_GPF0CONSLP 	 	(0xE0300000 + 0x0F0)
#define S5PV210_GPF0PUDSLP 	 	(0xE0300000 + 0x0F4)

/* PORT F1 */
#define S5PV210_GPF1CON	 	 	(0xE0300000 + 0x100)
#define S5PV210_GPF1DAT	 	 	(0xE0300000 + 0x104)
#define S5PV210_GPF1PUD	 	 	(0xE0300000 + 0x108)
#define S5PV210_GPF1DRV	 	 	(0xE0300000 + 0x10C)
#define S5PV210_GPF1CONSLP 	 	(0xE0300000 + 0x110)
#define S5PV210_GPF1PUDSLP 	 	(0xE0300000 + 0x114)

/* PORT F2 */
#define S5PV210_GPF2CON	 	 	(0xE0300000 + 0x120)
#define S5PV210_GPF2DAT	 	 	(0xE0300000 + 0x124)
#define S5PV210_GPF2PUD	 	 	(0xE0300000 + 0x128)
#define S5PV210_GPF2DRV	 	 	(0xE0300000 + 0x12C)
#define S5PV210_GPF2CONSLP 	 	(0xE0300000 + 0x130)
#define S5PV210_GPF2PUDSLP 	 	(0xE0300000 + 0x134)

/* PORT F3 */
#define S5PV210_GPF3CON	 	 	(0xE0300000 + 0x140)
#define S5PV210_GPF3DAT	 	 	(0xE0300000 + 0x144)
#define S5PV210_GPF3PUD	 	 	(0xE0300000 + 0x148)
#define S5PV210_GPF3DRV	 	 	(0xE0300000 + 0x14C)
#define S5PV210_GPF3CONSLP 	 	(0xE0300000 + 0x150)
#define S5PV210_GPF3PUDSLP 	 	(0xE0300000 + 0x154)

/* PORT G0 */
#define S5PV210_GPG0CON	 	 	(0xE0300000 + 0x160)
#define S5PV210_GPG0DAT	 	 	(0xE0300000 + 0x164)
#define S5PV210_GPG0PUD	 	 	(0xE0300000 + 0x168)
#define S5PV210_GPG0DRV	 	 	(0xE0300000 + 0x16C)
#define S5PV210_GPG0CONSLP 	 	(0xE0300000 + 0x170)
#define S5PV210_GPG0PUDSLP 	 	(0xE0300000 + 0x174)

/* PORT G1 */
#define S5PV210_GPG1CON	 	 	(0xE0300000 + 0x180)
#define S5PV210_GPG1DAT	 	 	(0xE0300000 + 0x184)
#define S5PV210_GPG1PUD	 	 	(0xE0300000 + 0x188)
#define S5PV210_GPG1DRV	 	 	(0xE0300000 + 0x18C)
#define S5PV210_GPG1CONSLP 	 	(0xE0300000 + 0x190)
#define S5PV210_GPG1PUDSLP 	 	(0xE0300000 + 0x194)

/* PORT G2 */
#define S5PV210_GPG2CON	 	 	(0xE0300000 + 0x1A0)
#define S5PV210_GPG2DAT	 	 	(0xE0300000 + 0x1A4)
#define S5PV210_GPG2PUD	 	 	(0xE0300000 + 0x1A8)
#define S5PV210_GPG2DRV	 	 	(0xE0300000 + 0x1AC)
#define S5PV210_GPG2CONSLP 	 	(0xE0300000 + 0x1B0)
#define S5PV210_GPG2PUDSLP 	 	(0xE0300000 + 0x1B4)

/* PORT G3 */
#define S5PV210_GPG3CON	 	 	(0xE0300000 + 0x1C0)
#define S5PV210_GPG3DAT	 	 	(0xE0300000 + 0x1C4)
#define S5PV210_GPG3PUD	 	 	(0xE0300000 + 0x1C8)
#define S5PV210_GPG3DRV	 	 	(0xE0300000 + 0x1CC)
#define S5PV210_GPG3CONSLP 	 	(0xE0300000 + 0x1D0)
#define S5PV210_GPG3PUDSLP 	 	(0xE0300000 + 0x1D4)

/* PORT H0 */
#define S5PV210_GPH0CON	 	 	(0xE0300000 + 0xC00)
#define S5PV210_GPH0DAT	 	 	(0xE0300000 + 0xC04)
#define S5PV210_GPH0PUD	 	 	(0xE0300000 + 0xC08)
#define S5PV210_GPH0DRV	 	 	(0xE0300000 + 0xC0C)

/* PORT H1 */
#define S5PV210_GPH1CON	 	 	(0xE0300000 + 0xC20)
#define S5PV210_GPH1DAT	 	 	(0xE0300000 + 0xC24)
#define S5PV210_GPH1PUD	 	 	(0xE0300000 + 0xC28)
#define S5PV210_GPH1DRV	 	 	(0xE0300000 + 0xC2C)

/* PORT H2 */
#define S5PV210_GPH2CON	 	 	(0xE0300000 + 0xC40)
#define S5PV210_GPH2DAT	 	 	(0xE0300000 + 0xC44)
#define S5PV210_GPH2PUD	 	 	(0xE0300000 + 0xC48)
#define S5PV210_GPH2DRV	 	 	(0xE0300000 + 0xC4C)

/* PORT H3 */
#define S5PV210_GPH3CON	 	 	(0xE0300000 + 0xC60)
#define S5PV210_GPH3DAT	 	 	(0xE0300000 + 0xC64)
#define S5PV210_GPH3PUD	 	 	(0xE0300000 + 0xC68)
#define S5PV210_GPH3DRV	 	 	(0xE0300000 + 0xC6C)

/* PORT I */
#define S5PV210_GPICON	 	 	(0xE0300000 + 0x1E0)
#define S5PV210_GPIDAT	 	 	(0xE0300000 + 0x1E4)
#define S5PV210_GPIPUD	 	 	(0xE0300000 + 0x1E8)
#define S5PV210_GPIDRV	 	 	(0xE0300000 + 0x1EC)
#define S5PV210_GPICONSLP 	 	(0xE0300000 + 0x1F0)
#define S5PV210_GPIPUDSLP 	 	(0xE0300000 + 0x1F4)

/* PORT J0 */
#define S5PV210_GPJ0CON	 	 	(0xE0300000 + 0x200)
#define S5PV210_GPJ0DAT	 	 	(0xE0300000 + 0x204)
#define S5PV210_GPJ0PUD	 	 	(0xE0300000 + 0x208)
#define S5PV210_GPJ0DRV	 	 	(0xE0300000 + 0x20C)
#define S5PV210_GPJ0CONSLP 	 	(0xE0300000 + 0x210)
#define S5PV210_GPJ0PUDSLP 	 	(0xE0300000 + 0x214)

/* PORT J1 */
#define S5PV210_GPJ1CON	 	 	(0xE0300000 + 0x220)
#define S5PV210_GPJ1DAT	 	 	(0xE0300000 + 0x224)
#define S5PV210_GPJ1PUD	 	 	(0xE0300000 + 0x228)
#define S5PV210_GPJ1DRV	 	 	(0xE0300000 + 0x22C)
#define S5PV210_GPJ1CONSLP 	 	(0xE0300000 + 0x230)
#define S5PV210_GPJ1PUDSLP 	 	(0xE0300000 + 0x234)

/* PORT J2 */
#define S5PV210_GPJ2CON	 	 	(0xE0300000 + 0x240)
#define S5PV210_GPJ2DAT	 	 	(0xE0300000 + 0x244)
#define S5PV210_GPJ2PUD	 	 	(0xE0300000 + 0x248)
#define S5PV210_GPJ2DRV	 	 	(0xE0300000 + 0x24C)
#define S5PV210_GPJ2CONSLP 	 	(0xE0300000 + 0x250)
#define S5PV210_GPJ2PUDSLP 	 	(0xE0300000 + 0x254)

/* PORT J3 */
#define S5PV210_GPJ3CON	 	 	(0xE0300000 + 0x260)
#define S5PV210_GPJ3DAT	 	 	(0xE0300000 + 0x264)
#define S5PV210_GPJ3PUD	 	 	(0xE0300000 + 0x268)
#define S5PV210_GPJ3DRV	 	 	(0xE0300000 + 0x26C)
#define S5PV210_GPJ3CONSLP 	 	(0xE0300000 + 0x270)
#define S5PV210_GPJ3PUDSLP 	 	(0xE0300000 + 0x274)

/* PORT J4 */
#define S5PV210_GPJ4CON	 	 	(0xE0300000 + 0x280)
#define S5PV210_GPJ4DAT	 	 	(0xE0300000 + 0x284)
#define S5PV210_GPJ4PUD	 	 	(0xE0300000 + 0x288)
#define S5PV210_GPJ4DRV	 	 	(0xE0300000 + 0x28C)
#define S5PV210_GPJ4CONSLP 	 	(0xE0300000 + 0x290)
#define S5PV210_GPJ4PUDSLP 	 	(0xE0300000 + 0x294)

/* PORT K0 */
#define S5PV210_GPK0CON	 	 	(0xE0300000 + 0x2A0)
#define S5PV210_GPK0DAT	 	 	(0xE0300000 + 0x2A4)
#define S5PV210_GPK0PUD	 	 	(0xE0300000 + 0x2A8)
#define S5PV210_GPK0DRV	 	 	(0xE0300000 + 0x2AC)
#define S5PV210_GPK0CONSLP 	 	(0xE0300000 + 0x2B0)
#define S5PV210_GPK0PUDSLP 	 	(0xE0300000 + 0x2B4)

/* PORT K1 */
#define S5PV210_GPK1CON	 	 	(0xE0300000 + 0x2C0)
#define S5PV210_GPK1DAT	 	 	(0xE0300000 + 0x2C4)
#define S5PV210_GPK1PUD	 	 	(0xE0300000 + 0x2C8)
#define S5PV210_GPK1DRV	 	 	(0xE0300000 + 0x2CC)
#define S5PV210_GPK1CONSLP 	 	(0xE0300000 + 0x2D0)
#define S5PV210_GPK1PUDSLP 	 	(0xE0300000 + 0x2D4)

/* PORT K2 */
#define S5PV210_GPK2CON	 	 	(0xE0300000 + 0x2E0)
#define S5PV210_GPK2DAT	 	 	(0xE0300000 + 0x2E4)
#define S5PV210_GPK2PUD	 	 	(0xE0300000 + 0x2E8)
#define S5PV210_GPK2DRV	 	 	(0xE0300000 + 0x2EC)
#define S5PV210_GPK2CONSLP 	 	(0xE0300000 + 0x2F0)
#define S5PV210_GPK2PUDSLP 	 	(0xE0300000 + 0x2F4)

/* PORT K3 */
#define S5PV210_GPK3CON	 	 	(0xE0300000 + 0x300)
#define S5PV210_GPK3DAT	 	 	(0xE0300000 + 0x304)
#define S5PV210_GPK3PUD	 	 	(0xE0300000 + 0x308)
#define S5PV210_GPK3DRV	 	 	(0xE0300000 + 0x30C)
#define S5PV210_GPK3CONSLP 	 	(0xE0300000 + 0x310)
#define S5PV210_GPK3PUDSLP 	 	(0xE0300000 + 0x314)

#endif

#endif /* __S5PV210_REG_GPIO_H__ */
