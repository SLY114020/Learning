﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: Arena武斗场.xlsx SHEET: 清除挑战CD费用 KEY: times

#pragma once
#pragma pack(1)
struct ArenaClearCDCost
{
	DWORD getUniqueID() const { return usage_id_hash(times); }

	DWORD times; // 次数
	DWORD cost; // 点券费用
};
#pragma pack()

#if false
namespace table
{
	// Arena武斗场
	struct zArenaClearCDCostEntry : public zEntry
	{
		DWORD times; // 次数
		DWORD cost; // 点券费用

		virtual const char* getClassName() const { return "Arena武斗场"; }
		static const char* getFileName() { return "ArenaClearCDCost.tbl"; }
		void fill(const ArenaClearCDCost& base)
		{
			this->id = base.getUniqueID();

			this->times = base.times;
			this->cost = base.cost;
		}
		void reset()
		{
			this->times = 0;
			this->cost = 0;
		}
	};
	typedef zDataBM<zArenaClearCDCostEntry, ArenaClearCDCost> ArenaClearCDCostManager;
}
#endif
