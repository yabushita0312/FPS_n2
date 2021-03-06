#pragma once

namespace MAIN_ {
	enum class Effect {
		ef_fire,	//���C��
		ef_reco,	//�����a���e
		ef_smoke,	//�e�̋O��
		ef_gndsmoke,//�n�ʂ̋O��
		ef_fire2,	//���C��
		ef_hitblood,//�����Ԃ�
		ef_greexp,	//�O������
		effects,	//�ǂݍ���
	};
	enum class EnumGunParts {
		PARTS_NONE,
		PARTS_BASE,
		PARTS_MAGAZINE,
		PARTS_MAZZULE,
		PARTS_GRIP,
		PARTS_UPER_HGUARD,
		PARTS_UNDER_HGUARD,
		PARTS_DUSTCOVER,
		PARTS_STOCK,
		PARTS_LAM,
		PARTS_MOUNT_BASE,
		PARTS_MOUNT,
		PARTS_SIGHT,
		PARTS_FOREGRIP,
		PARTS_NUM,
	};
	enum class EnumAttachPoint {
		POINTS_NONE,
		POINTS_UPER_RAIL,
		POINTS_UNDER_RAIL,
		POINTS_LEFTSIDE_RAIL,
		POINTS_RIGHTSIDE_RAIL,
		POINTS_SIDEMOUNT,
		POINTS_SIDEMOUNT_BASE,
		POINTS_STOCK_BASE,
		POINTS_DUSTCOVER_BASE,
		POINTS_UPER_HANDGUARD,
		POINTS_UNDER_HANDGUARD,
		POINTS_MAZZULE_BASE,
		POINTS_MAGAZINE_BASE,
		POINTS_GRIP_BASE,
		POINTS_NUM,
	};
	enum class EnumSELECTER {
		SELECT_SEMI,
		SELECT_FULL,
		SELECT_3B,
		SELECT_2B,
		SELECT_NUM,
	};
	enum class EnumSELECT_LAM {
		SELECTLAM_LASER,
		SELECTLAM_LIGHT,
		SELECTLAM_NUM,
	};
}