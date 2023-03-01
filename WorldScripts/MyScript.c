modded class CAContinuousFill : CAContinuousBase
{
	void CAContinuousFill( float quantity_filled_per_second , int liquid_type )
	{
		m_QuantityFilledPerSecond = 15 * quantity_filled_per_second;
		m_liquid_type = liquid_type;
	}
}
modded class CAContinuousFillFuel : CAContinuousBase
{
	void CAContinuousFillFuel( float quantity_used_per_second, float time_to_progress )
	{
		m_QuantityUsedPerSecond = 15 * quantity_used_per_second;
		m_DefaultTimeStep = time_to_progress;
	}
}