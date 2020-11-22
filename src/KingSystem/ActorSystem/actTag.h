#pragma once

#include <basis/seadTypes.h>
#include <string_view>
#include "KingSystem/Utils/HashUtil.h"

namespace ksys::act {

/// Actor tag.
class Tag {
public:
    Tag() = default;
    explicit constexpr Tag(u32 hash) : mHash(hash) {}
    explicit constexpr Tag(std::string_view name) : mHash(util::calcCrc32(name)) {}

    constexpr bool operator==(Tag other) const { return mHash == other.mHash; }
    constexpr bool operator!=(Tag other) const { return mHash != other.mHash; }
    constexpr bool operator<(Tag other) const { return mHash < other.mHash; }
    constexpr bool operator>(Tag other) const { return mHash > other.mHash; }
    constexpr bool operator<=(Tag other) const { return mHash <= other.mHash; }
    constexpr bool operator>=(Tag other) const { return mHash >= other.mHash; }

    constexpr operator u32() const { return mHash; }
    constexpr u32 getHash() const { return mHash; }

private:
    u32 mHash;
};

#define KSYS_ACT_DEFINE_TAG(NAME) inline constexpr Tag NAME(#NAME)
#define KSYS_ACT_DEFINE_TAG_UNK(HASH) inline constexpr Tag Unk_##HASH(HASH)

namespace tags {

KSYS_ACT_DEFINE_TAG(AcceptSilentKill);
KSYS_ACT_DEFINE_TAG(ActorSyncStyleSiteBoss);
KSYS_ACT_DEFINE_TAG(AddMultiActionBufIfNoAssignment);
KSYS_ACT_DEFINE_TAG(AffectBeastGanon);
KSYS_ACT_DEFINE_TAG(AirBaseLodParent);
KSYS_ACT_DEFINE_TAG(AirOcta);
KSYS_ACT_DEFINE_TAG(AllRadarActor);
KSYS_ACT_DEFINE_TAG(AlwaysResetAtSystemReset);
KSYS_ACT_DEFINE_TAG(AlwaysTurnActor);
KSYS_ACT_DEFINE_TAG(AmiiboArmorItem);
KSYS_ACT_DEFINE_TAG(AmiiboFitGround);
KSYS_ACT_DEFINE_TAG(AmiiboNoDrop2ndTouch);
KSYS_ACT_DEFINE_TAG(AmiiboNoDrop3rdTouch);
KSYS_ACT_DEFINE_TAG(AmiiboNoDropBeginning);
KSYS_ACT_DEFINE_TAG(AmiiboOnlyDropBeginning);
KSYS_ACT_DEFINE_TAG(AmiiboTreasure);
KSYS_ACT_DEFINE_TAG(AncientGuardTarget);
KSYS_ACT_DEFINE_TAG(AncientWeapon);
KSYS_ACT_DEFINE_TAG(AnimalTypeBear);
KSYS_ACT_DEFINE_TAG(AnimalTypeDomestic);
KSYS_ACT_DEFINE_TAG(AnimalTypeWolf);
KSYS_ACT_DEFINE_TAG(AppendUniqueNameToEntryPointName);
KSYS_ACT_DEFINE_TAG(ApplyDeluxeGetDemo);
KSYS_ACT_DEFINE_TAG(ApplyHighGradeGetDemo);
KSYS_ACT_DEFINE_TAG(ArmorDye);
KSYS_ACT_DEFINE_TAG(Arrow);
KSYS_ACT_DEFINE_TAG(AttackedNPC);
KSYS_ACT_DEFINE_TAG(AutoCliffMaterial);
KSYS_ACT_DEFINE_TAG(AutoCliffMaterialSet);
KSYS_ACT_DEFINE_TAG(AutoCreateFarActor);
KSYS_ACT_DEFINE_TAG(AutoGenAroundMightyTree);
KSYS_ACT_DEFINE_TAG(AutoGenAroundShrub);
KSYS_ACT_DEFINE_TAG(AutoGenExcludePlain);
KSYS_ACT_DEFINE_TAG(AutoGenExcludeShade);
KSYS_ACT_DEFINE_TAG(AutoGenExcludeWaterFront);
KSYS_ACT_DEFINE_TAG(AutoGenFlat);
KSYS_ACT_DEFINE_TAG(AutoGenFlatAndTurf);
KSYS_ACT_DEFINE_TAG(AutoGenFlatSurface);
KSYS_ACT_DEFINE_TAG(AutoGenForbiddenHeavySlope);
KSYS_ACT_DEFINE_TAG(AutoGenForest);
KSYS_ACT_DEFINE_TAG(AutoGenGrassAndTurfEdge);
KSYS_ACT_DEFINE_TAG(AutoGenGrassLong);
KSYS_ACT_DEFINE_TAG(AutoGenGrassShort);
KSYS_ACT_DEFINE_TAG(AutoGenGrove);
KSYS_ACT_DEFINE_TAG(AutoGenLimitExcludeGrit);
KSYS_ACT_DEFINE_TAG(AutoGenLimitExcludeShade);
KSYS_ACT_DEFINE_TAG(AutoGenLimitExcludeSnow);
KSYS_ACT_DEFINE_TAG(AutoGenLimitGrassLong);
KSYS_ACT_DEFINE_TAG(AutoGenLimitGrassShort);
KSYS_ACT_DEFINE_TAG(AutoGenLimitShade);
KSYS_ACT_DEFINE_TAG(AutoGenLimitSnow);
KSYS_ACT_DEFINE_TAG(AutoGenLimitTurf);
KSYS_ACT_DEFINE_TAG(AutoGenObjectEdgeAdd);
KSYS_ACT_DEFINE_TAG(AutoGenObjectEdgeMulti);
KSYS_ACT_DEFINE_TAG(AutoGenOrnamentalFlower);
KSYS_ACT_DEFINE_TAG(AutoGenPlain);
KSYS_ACT_DEFINE_TAG(AutoGenReplaceSet);
KSYS_ACT_DEFINE_TAG(AutoGenSand);
KSYS_ACT_DEFINE_TAG(AutoGenShade);
KSYS_ACT_DEFINE_TAG(AutoGenTurf);
KSYS_ACT_DEFINE_TAG(AutoGenWaterDistanceAndDeadwoordNeighbor);
KSYS_ACT_DEFINE_TAG(AutoGenWaterDistanceBottom);
KSYS_ACT_DEFINE_TAG(AutoGenWaterDistanceLand);
KSYS_ACT_DEFINE_TAG(AutoGenWaterFlow);
KSYS_ACT_DEFINE_TAG(AutoGenWaterFlowNone);
KSYS_ACT_DEFINE_TAG(AutoGenWaterFront);
KSYS_ACT_DEFINE_TAG(AutoGenWaterSurface);
KSYS_ACT_DEFINE_TAG(AutoGenWoodRoot);
KSYS_ACT_DEFINE_TAG(AutoPlacementForbidCreate);
KSYS_ACT_DEFINE_TAG(AutoPlacementMaterial);
KSYS_ACT_DEFINE_TAG(AutoRuinMaterialBurn);
KSYS_ACT_DEFINE_TAG(AutoRuinMaterialStone);
KSYS_ACT_DEFINE_TAG(AutoRuinMaterialWood);
KSYS_ACT_DEFINE_TAG(AwarenessEnemySearchTarget);
KSYS_ACT_DEFINE_TAG(BeeTarget);
KSYS_ACT_DEFINE_TAG(BlockBoomerang);
KSYS_ACT_DEFINE_TAG(BoneWeapon);
KSYS_ACT_DEFINE_TAG(CalcAISkipOnPhysPause);
KSYS_ACT_DEFINE_TAG(CanBalloonParasite);
KSYS_ACT_DEFINE_TAG(CanBreakIceMakerBlock);
KSYS_ACT_DEFINE_TAG(CanBreakRemoteBomb);
KSYS_ACT_DEFINE_TAG(CanConnectMagneGear);
KSYS_ACT_DEFINE_TAG(CanEquip);
KSYS_ACT_DEFINE_TAG(CanFly);
KSYS_ACT_DEFINE_TAG(CanGetCollectSet);
KSYS_ACT_DEFINE_TAG(CanGetImportantItem);
KSYS_ACT_DEFINE_TAG(CanGetPouch);
KSYS_ACT_DEFINE_TAG(CanLift);
KSYS_ACT_DEFINE_TAG(CanPullOutGiantObject);
KSYS_ACT_DEFINE_TAG(CanPush);
KSYS_ACT_DEFINE_TAG(CanPushUpward);
KSYS_ACT_DEFINE_TAG(CanRidden);
KSYS_ACT_DEFINE_TAG(CanStack);
KSYS_ACT_DEFINE_TAG(CanUse);
KSYS_ACT_DEFINE_TAG(CancelIceMaker);
KSYS_ACT_DEFINE_TAG(CancelIceMakerWithSwimMode);
KSYS_ACT_DEFINE_TAG(CannotSell);
KSYS_ACT_DEFINE_TAG(CannotTouchIceMakerBlock);
KSYS_ACT_DEFINE_TAG(CantPut);
KSYS_ACT_DEFINE_TAG(ChangeBoots);
KSYS_ACT_DEFINE_TAG(CheckBirdSafetyArea);
KSYS_ACT_DEFINE_TAG(ContactCantSave);
KSYS_ACT_DEFINE_TAG(CookBizarre);
KSYS_ACT_DEFINE_TAG(CookDish);
KSYS_ACT_DEFINE_TAG(CookEMedicine);
KSYS_ACT_DEFINE_TAG(CookEffectName);
KSYS_ACT_DEFINE_TAG(CookEnemy);
KSYS_ACT_DEFINE_TAG(CookFailure);
KSYS_ACT_DEFINE_TAG(CookFish);
KSYS_ACT_DEFINE_TAG(CookFruit);
KSYS_ACT_DEFINE_TAG(CookInsect);
KSYS_ACT_DEFINE_TAG(CookLowPrice);
KSYS_ACT_DEFINE_TAG(CookMaterial);
KSYS_ACT_DEFINE_TAG(CookMeat);
KSYS_ACT_DEFINE_TAG(CookMushroom);
KSYS_ACT_DEFINE_TAG(CookOre);
KSYS_ACT_DEFINE_TAG(CookPlant);
KSYS_ACT_DEFINE_TAG(CookResult);
KSYS_ACT_DEFINE_TAG(CookSkewer);
KSYS_ACT_DEFINE_TAG(CookSpice);
KSYS_ACT_DEFINE_TAG(CookValue1);
KSYS_ACT_DEFINE_TAG(CoolWeapon);
KSYS_ACT_DEFINE_TAG(CreateFromBranchLocatorRandom);
KSYS_ACT_DEFINE_TAG(CreateFromOnTreeLocator);
KSYS_ACT_DEFINE_TAG(CreateFromOnTreeLocatorRandom);
KSYS_ACT_DEFINE_TAG(CreateFromTrunkLocatorRandom);
KSYS_ACT_DEFINE_TAG(CreateFromTrunkOrGlowStoneLocator);
KSYS_ACT_DEFINE_TAG(CureItem);
KSYS_ACT_DEFINE_TAG(DeadTree);
KSYS_ACT_DEFINE_TAG(DeleteHitArrow);
KSYS_ACT_DEFINE_TAG(DemoSpecialActor);
KSYS_ACT_DEFINE_TAG(DisableAreaCulling);
KSYS_ACT_DEFINE_TAG(DisableCreateLodModel);
KSYS_ACT_DEFINE_TAG(DisableDgnRotMoveFollow);
KSYS_ACT_DEFINE_TAG(DisableFlashback);
KSYS_ACT_DEFINE_TAG(DisableForbidPushJob);
KSYS_ACT_DEFINE_TAG(DisableHideNonDemoMember);
KSYS_ACT_DEFINE_TAG(DisableMessageDialogName);
KSYS_ACT_DEFINE_TAG(DisableRegisterVillagerMgr);
KSYS_ACT_DEFINE_TAG(DisableResidentUnit);
KSYS_ACT_DEFINE_TAG(DisableUseLodModel);
KSYS_ACT_DEFINE_TAG(Door);
KSYS_ACT_DEFINE_TAG(DoubleDoor);
KSYS_ACT_DEFINE_TAG(DrinkItem);
KSYS_ACT_DEFINE_TAG(EatItem);
KSYS_ACT_DEFINE_TAG(EffectiveAncientArrow);
KSYS_ACT_DEFINE_TAG(EnableForbidPushJob);
KSYS_ACT_DEFINE_TAG(EnableRemainsScene);
KSYS_ACT_DEFINE_TAG(EnemyConstantBind);
KSYS_ACT_DEFINE_TAG(EnemyFortressMgr);
KSYS_ACT_DEFINE_TAG(EnemyHide);
KSYS_ACT_DEFINE_TAG(EnemyHornTarget);
KSYS_ACT_DEFINE_TAG(EnemyHuge);
KSYS_ACT_DEFINE_TAG(EnemyMaterial);
KSYS_ACT_DEFINE_TAG(EnemyMidsize);
KSYS_ACT_DEFINE_TAG(EnemyNoStrikeLightning);
KSYS_ACT_DEFINE_TAG(EnemyNotPick);
KSYS_ACT_DEFINE_TAG(EnemyNotTarget);
KSYS_ACT_DEFINE_TAG(EnemyOctarock);
KSYS_ACT_DEFINE_TAG(EnemySiteBoss_R);
KSYS_ACT_DEFINE_TAG(EnemyTarget);
KSYS_ACT_DEFINE_TAG(EnemyView);
KSYS_ACT_DEFINE_TAG(EventParticipatePreActor);
KSYS_ACT_DEFINE_TAG(ExclusionDefeatFlagCount);
KSYS_ACT_DEFINE_TAG(ExclusionFromSandwichDetection);
KSYS_ACT_DEFINE_TAG(ExistOnlyTrunk);
KSYS_ACT_DEFINE_TAG(Explosive);
KSYS_ACT_DEFINE_TAG(ExplosivesEnemyAI);
KSYS_ACT_DEFINE_TAG(Fairy);
KSYS_ACT_DEFINE_TAG(FarModelDisable);
KSYS_ACT_DEFINE_TAG(FarModelEnable);
KSYS_ACT_DEFINE_TAG(ForceAwarenessCreation_Enemy);
KSYS_ACT_DEFINE_TAG(ForceCalcInEvent);
KSYS_ACT_DEFINE_TAG(GetAnotherActor);
KSYS_ACT_DEFINE_TAG(GrassDrop);
KSYS_ACT_DEFINE_TAG(GroupingDisplayItem);
KSYS_ACT_DEFINE_TAG(HeartContainer);
KSYS_ACT_DEFINE_TAG(HeroSoul);
KSYS_ACT_DEFINE_TAG(HiddenKorok);
KSYS_ACT_DEFINE_TAG(HopBush);
KSYS_ACT_DEFINE_TAG(HorseRider);
KSYS_ACT_DEFINE_TAG(IgnoreBoundingAtAreaCulling);
KSYS_ACT_DEFINE_TAG(IgnoreIceMakerBreakCheck);
KSYS_ACT_DEFINE_TAG(IgnoreIceMakerCheck);
KSYS_ACT_DEFINE_TAG(IgnoreIceMakerLiftCheck);
KSYS_ACT_DEFINE_TAG(IgnoreMagneStickShapeCast);
KSYS_ACT_DEFINE_TAG(Important);
KSYS_ACT_DEFINE_TAG(IsApplyVelocityAttnSurfing);
KSYS_ACT_DEFINE_TAG(IsApplyVelocityClimbing);
KSYS_ACT_DEFINE_TAG(IsClimbCameraCollisionIgnore);
KSYS_ACT_DEFINE_TAG(IsCurrentSuspendRigidBody);
KSYS_ACT_DEFINE_TAG(IsDelayItemSelect);
KSYS_ACT_DEFINE_TAG(IsDisableContactMotorcycle);
KSYS_ACT_DEFINE_TAG(IsDomino);
KSYS_ACT_DEFINE_TAG(IsEffectiveAncientWeapon);
KSYS_ACT_DEFINE_TAG(IsEquipStand);
KSYS_ACT_DEFINE_TAG(IsFixedAcceptor);
KSYS_ACT_DEFINE_TAG(IsGrassCut);
KSYS_ACT_DEFINE_TAG(IsIceMakerBlock);
KSYS_ACT_DEFINE_TAG(IsIgnoreAtObstacleReverse);
KSYS_ACT_DEFINE_TAG(IsKnockbackDirY);
KSYS_ACT_DEFINE_TAG(IsKnockbackDirZ);
KSYS_ACT_DEFINE_TAG(IsMagneActor);
KSYS_ACT_DEFINE_TAG(IsMagneStickAcceptor);
KSYS_ACT_DEFINE_TAG(IsMasterModeDamageMultiplierActor);
KSYS_ACT_DEFINE_TAG(IsPressBreakByEnNPC);
KSYS_ACT_DEFINE_TAG(IsPressHellObj);
KSYS_ACT_DEFINE_TAG(IsPressureObj);
KSYS_ACT_DEFINE_TAG(IsRaft);
KSYS_ACT_DEFINE_TAG(IsRemainsWaterBullet);
KSYS_ACT_DEFINE_TAG(IsSnowBall);
KSYS_ACT_DEFINE_TAG(IsTreasureSpot);
KSYS_ACT_DEFINE_TAG(IsTurnOffTouchMotorcycle);
KSYS_ACT_DEFINE_TAG(IsVehicle);
KSYS_ACT_DEFINE_TAG(IwaRockWeakPoint);
KSYS_ACT_DEFINE_TAG(LiftRockMaterial);
KSYS_ACT_DEFINE_TAG(LowTree);
KSYS_ACT_DEFINE_TAG(MagicFireObj);
KSYS_ACT_DEFINE_TAG(MagneDirXOnly);
KSYS_ACT_DEFINE_TAG(MagneDirYFree);
KSYS_ACT_DEFINE_TAG(MagneDirZOnly);
KSYS_ACT_DEFINE_TAG(MagneNoDirControl);
KSYS_ACT_DEFINE_TAG(Mannequin);
KSYS_ACT_DEFINE_TAG(Material);
KSYS_ACT_DEFINE_TAG(MessageDialogViewBoard);
KSYS_ACT_DEFINE_TAG(MessageDialogViewCaption);
KSYS_ACT_DEFINE_TAG(MessageDialogViewSeekerStone);
KSYS_ACT_DEFINE_TAG(MessageDialogViewSystem);
KSYS_ACT_DEFINE_TAG(MightyTree);
KSYS_ACT_DEFINE_TAG(NeedTwoHandPullOutTree);
KSYS_ACT_DEFINE_TAG(NestActor);
KSYS_ACT_DEFINE_TAG(NoAlphaHide);
KSYS_ACT_DEFINE_TAG(NoCreateForStackLink);
KSYS_ACT_DEFINE_TAG(NoFarModelCulling);
KSYS_ACT_DEFINE_TAG(NoLeafTree);
KSYS_ACT_DEFINE_TAG(NoRenderingFarModelCulling);
KSYS_ACT_DEFINE_TAG(NoSubsWeaponLife);
KSYS_ACT_DEFINE_TAG(NotCountDefeatedNum);
KSYS_ACT_DEFINE_TAG(NotDropFromPlayer);
KSYS_ACT_DEFINE_TAG(NotFallDelete);
KSYS_ACT_DEFINE_TAG(NotGenerateSpeedTerror);
KSYS_ACT_DEFINE_TAG(NotMakeDispNameFlag);
KSYS_ACT_DEFINE_TAG(NotOpenPouch);
KSYS_ACT_DEFINE_TAG(NotRandomSet);
KSYS_ACT_DEFINE_TAG(NotResetStockNumAtEvery0);
KSYS_ACT_DEFINE_TAG(NpcOnlyEquipment);
KSYS_ACT_DEFINE_TAG(ObjectNightGlow);
KSYS_ACT_DEFINE_TAG(ObservedByTag);
KSYS_ACT_DEFINE_TAG(OnLowTree);
KSYS_ACT_DEFINE_TAG(PasteGrudgeSlime);
KSYS_ACT_DEFINE_TAG(PathOptimizationAlways);
KSYS_ACT_DEFINE_TAG(PhysicsPauseDisable);
KSYS_ACT_DEFINE_TAG(PreActorChemical);
KSYS_ACT_DEFINE_TAG(PreActorXLink);
KSYS_ACT_DEFINE_TAG(PriorityMaterial);
KSYS_ACT_DEFINE_TAG(PutAndFly);
KSYS_ACT_DEFINE_TAG(PutScatter);
KSYS_ACT_DEFINE_TAG(RainBonusMaterial);
KSYS_ACT_DEFINE_TAG(RandomCreateNotRain);
KSYS_ACT_DEFINE_TAG(RegisterButDontEquipWeapon);
KSYS_ACT_DEFINE_TAG(RenderingNonUseClustering);
KSYS_ACT_DEFINE_TAG(RenderingUseClustering);
KSYS_ACT_DEFINE_TAG(RenderingUseTeraTree);
KSYS_ACT_DEFINE_TAG(ResetLastRiddenAnimalHorse);
KSYS_ACT_DEFINE_TAG(RevivalBloodyMoon);
KSYS_ACT_DEFINE_TAG(RevivalNone);
KSYS_ACT_DEFINE_TAG(RevivalNoneForDrop);
KSYS_ACT_DEFINE_TAG(RevivalNoneForUsed);
KSYS_ACT_DEFINE_TAG(RevivalRandom);
KSYS_ACT_DEFINE_TAG(RevivalRandomForDrop);
KSYS_ACT_DEFINE_TAG(RevivalUnderGodTime);
KSYS_ACT_DEFINE_TAG(RippleAtContactPoint);
KSYS_ACT_DEFINE_TAG(RoastFish);
KSYS_ACT_DEFINE_TAG(RoastFruit);
KSYS_ACT_DEFINE_TAG(RoastItem);
KSYS_ACT_DEFINE_TAG(RoastMeat);
KSYS_ACT_DEFINE_TAG(RoastMushroom);
KSYS_ACT_DEFINE_TAG(RoastPlant);
KSYS_ACT_DEFINE_TAG(RoastVegetable);
KSYS_ACT_DEFINE_TAG(Rock);
KSYS_ACT_DEFINE_TAG(RotMoveFollowPreCalc);
KSYS_ACT_DEFINE_TAG(RuinAutoPlacementBurn);
KSYS_ACT_DEFINE_TAG(RuinAutoPlacementStone);
KSYS_ACT_DEFINE_TAG(RuinAutoPlacementWood);
KSYS_ACT_DEFINE_TAG(Rupee);
KSYS_ACT_DEFINE_TAG(Scaffold);
KSYS_ACT_DEFINE_TAG(SensorFilterLayer_None);
KSYS_ACT_DEFINE_TAG(SheikSensorTargetDeadOrAlive);
KSYS_ACT_DEFINE_TAG(Signboard);
KSYS_ACT_DEFINE_TAG(SiteBossParts);
KSYS_ACT_DEFINE_TAG(SlideDoor);
KSYS_ACT_DEFINE_TAG(SmallKey);
KSYS_ACT_DEFINE_TAG(SpecialCareNecessaryForDemo);
KSYS_ACT_DEFINE_TAG(StalfosParts);
KSYS_ACT_DEFINE_TAG(StaminaContainer);
KSYS_ACT_DEFINE_TAG(StickArrow);
KSYS_ACT_DEFINE_TAG(StopTimerLong);
KSYS_ACT_DEFINE_TAG(StopTimerMiddle);
KSYS_ACT_DEFINE_TAG(StopTimerNoDisplay);
KSYS_ACT_DEFINE_TAG(StopTimerNotCancelAtk);
KSYS_ACT_DEFINE_TAG(StopTimerShort);
KSYS_ACT_DEFINE_TAG(StopTimerSmallMass);
KSYS_ACT_DEFINE_TAG(TeamAssassin);
KSYS_ACT_DEFINE_TAG(TeamBokoblin);
KSYS_ACT_DEFINE_TAG(TeamChuchu);
KSYS_ACT_DEFINE_TAG(TeamForestGiant);
KSYS_ACT_DEFINE_TAG(TeamGolem);
KSYS_ACT_DEFINE_TAG(TeamGolemLittle);
KSYS_ACT_DEFINE_TAG(TeamGuardian);
KSYS_ACT_DEFINE_TAG(TeamGuardianMini);
KSYS_ACT_DEFINE_TAG(TeamLizarfos);
KSYS_ACT_DEFINE_TAG(TeamLynel);
KSYS_ACT_DEFINE_TAG(TeamMoriblin);
KSYS_ACT_DEFINE_TAG(TeamStalfos);
KSYS_ACT_DEFINE_TAG(TeamWizzrobe);
KSYS_ACT_DEFINE_TAG(ThickTreeWeapon);
KSYS_ACT_DEFINE_TAG(ThinTreeWeapon);
KSYS_ACT_DEFINE_TAG(ThroughCheckForceBlowAttack);
KSYS_ACT_DEFINE_TAG(ThroughKorogFan);
KSYS_ACT_DEFINE_TAG(TreasureBox);
KSYS_ACT_DEFINE_TAG(Tree);
KSYS_ACT_DEFINE_TAG(TurnActorBowCharge);
KSYS_ACT_DEFINE_TAG(TurnActorNearEnemy);
KSYS_ACT_DEFINE_TAG(TypeFish);
KSYS_ACT_DEFINE_TAG(TypeInsect);
KSYS_ACT_DEFINE_TAG(TypeKokko);
KSYS_ACT_DEFINE_TAG(UnderGodForest);
KSYS_ACT_DEFINE_TAG(UnderGodForestOff);
KSYS_ACT_DEFINE_TAG(UndispCut);
KSYS_ACT_DEFINE_TAG(UnuseModelLight);
KSYS_ACT_DEFINE_TAG(UseAnimalSupportNormalCalculator);
KSYS_ACT_DEFINE_TAG(UseAnimalUnit);
KSYS_ACT_DEFINE_TAG(UseBossExHPParamForMasterMode);
KSYS_ACT_DEFINE_TAG(UseChemicalType);
KSYS_ACT_DEFINE_TAG(UseClothReactionUnit);
KSYS_ACT_DEFINE_TAG(UseExtendedEntity);
KSYS_ACT_DEFINE_TAG(UseExtraBindActor);
KSYS_ACT_DEFINE_TAG(UseModelFadeAlphaInEvent);
KSYS_ACT_DEFINE_TAG(UseNecklaceSaveFlag);
KSYS_ACT_DEFINE_TAG(UseTgSensorMaterialOnHit);
KSYS_ACT_DEFINE_TAG(VeryThinTreeWeapon);
KSYS_ACT_DEFINE_TAG(VillagerMgrNoSleepDuringEvent);
KSYS_ACT_DEFINE_TAG(WarmWeapon);
KSYS_ACT_DEFINE_TAG(WarpIcon);
KSYS_ACT_DEFINE_TAG(WatchmanEquip);
KSYS_ACT_DEFINE_TAG(WeaponHookSandworm);
KSYS_ACT_DEFINE_TAG(WhiteArrowAttentionOFF);
KSYS_ACT_DEFINE_TAG(WigBox);
KSYS_ACT_DEFINE_TAG(WigGrass);
KSYS_ACT_DEFINE_TAG(WigStone);
KSYS_ACT_DEFINE_TAG(WigTree);
KSYS_ACT_DEFINE_TAG(WolfLinkGroundCheckTarget);
KSYS_ACT_DEFINE_TAG(WolfLinkNoChainAttack);
KSYS_ACT_DEFINE_TAG(WolfLinkNoTarget);
KSYS_ACT_DEFINE_TAG(WolfLinkPowerUpFood);
KSYS_ACT_DEFINE_TAG(XLinkEventOnAtInit);
KSYS_ACT_DEFINE_TAG(ZukanAnimal);
KSYS_ACT_DEFINE_TAG(ZukanBoss);
KSYS_ACT_DEFINE_TAG(ZukanDLCOnly);
KSYS_ACT_DEFINE_TAG(ZukanEnemy);
KSYS_ACT_DEFINE_TAG(ZukanHardModeOnly);
KSYS_ACT_DEFINE_TAG(ZukanOther);
KSYS_ACT_DEFINE_TAG(ZukanSozai);
KSYS_ACT_DEFINE_TAG(ZukanWeapon);

KSYS_ACT_DEFINE_TAG_UNK(0x4F4E1426);

}  // namespace tags

#undef KSYS_ACT_DEFINE_TAG
#undef KSYS_ACT_DEFINE_TAG_UNK

}  // namespace ksys::act
