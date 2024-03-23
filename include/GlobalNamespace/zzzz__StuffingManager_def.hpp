#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "GlobalNamespace/zzzz__StuffingManager_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StuffingManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
struct ItemTransformationData;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class MapObject;
}
namespace GlobalNamespace {
class __StuffingManager__OnMasterPlayerStuffingCountChanged;
}
namespace GlobalNamespace {
struct __StuffingManager__TransferType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __StuffingManager__TransferType;
}
namespace GlobalNamespace {
class StuffingManager;
}
namespace GlobalNamespace {
class __StuffingManager__OnMasterPlayerStuffingCountChanged;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__StuffingManager__TransferType);
MARK_REF_PTR_T(::GlobalNamespace::StuffingManager);
MARK_REF_PTR_T(::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged);
// Type: ::OnMasterPlayerStuffingCountChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StuffingManager::OnMasterPlayerStuffingCountChanged*
class CORDL_TYPE __StuffingManager__OnMasterPlayerStuffingCountChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1441788, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t newCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x144180c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1441774, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t newCount);

  static inline ::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x14416b0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StuffingManager__OnMasterPlayerStuffingCountChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StuffingManager__OnMasterPlayerStuffingCountChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StuffingManager__OnMasterPlayerStuffingCountChanged(__StuffingManager__OnMasterPlayerStuffingCountChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StuffingManager__OnMasterPlayerStuffingCountChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StuffingManager__OnMasterPlayerStuffingCountChanged(__StuffingManager__OnMasterPlayerStuffingCountChanged const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TransferType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::StuffingManager::TransferType
struct CORDL_TYPE __StuffingManager__TransferType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____StuffingManager__TransferType_Unwrapped
  enum struct ____StuffingManager__TransferType_Unwrapped : int32_t {
    __E_stuffing = static_cast<int32_t>(0x0),
    __E_currency = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____StuffingManager__TransferType_Unwrapped() const noexcept {
    return static_cast<____StuffingManager__TransferType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StuffingManager__TransferType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __StuffingManager__TransferType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field currency value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__StuffingManager__TransferType const currency;

  /// @brief Field stuffing value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__StuffingManager__TransferType const stuffing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StuffingManager__TransferType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StuffingManager__TransferType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StuffingManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StuffingManager*
class CORDL_TYPE StuffingManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::StuffingManager>> {
public:
  // Declarations
  using OnMasterPlayerStuffingCountChanged = ::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged;

  using TransferType = ::GlobalNamespace::__StuffingManager__TransferType;

  /// @brief Field <masterPlayerStuffingCount>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__masterPlayerStuffingCount_k__BackingField,
                             put = setStaticF__masterPlayerStuffingCount_k__BackingField)) int32_t _masterPlayerStuffingCount_k__BackingField;

  /// @brief Field hasStuffingCountSaveQueued, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasStuffingCountSaveQueued, put = setStaticF_hasStuffingCountSaveQueued)) bool hasStuffingCountSaveQueued;

  /// @brief Field nextStuffingCountSaveTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nextStuffingCountSaveTime, put = setStaticF_nextStuffingCountSaveTime)) float_t nextStuffingCountSaveTime;

  /// @brief Field onMasterPlayerStuffingCountChangedCallbacks, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onMasterPlayerStuffingCountChangedCallbacks,
      put = __cordl_internal_set_onMasterPlayerStuffingCountChangedCallbacks))::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged* onMasterPlayerStuffingCountChangedCallbacks;

  /// @brief Field stuffingEnterSoundTimers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingEnterSoundTimers, put = __cordl_internal_set_stuffingEnterSoundTimers))::System::Collections::Generic::Dictionary_2<
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>, float_t>* stuffingEnterSoundTimers;

  /// @brief Field stuffingEnterSounds, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingEnterSounds, put = __cordl_internal_set_stuffingEnterSounds))::System::Collections::Generic::Dictionary_2<
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>, ::UnityW<::UnityEngine::AudioSource>>* stuffingEnterSounds;

  /// @brief Field stuffingTransferEffectPrefabs, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_stuffingTransferEffectPrefabs,
               put = __cordl_internal_set_stuffingTransferEffectPrefabs))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> stuffingTransferEffectPrefabs;

  /// @brief Field transferTypeReference, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_transferTypeReference, put = __cordl_internal_set_transferTypeReference))::GlobalNamespace::__StuffingManager__TransferType transferTypeReference;

  /// @brief Method CanAddStuffing, addr 0x1440580, size 0x74, virtual false, abstract: false, final false
  static inline bool CanAddStuffing(int32_t maxAmount, ByRef<int32_t> allowedAddAmount);

  /// @brief Method DoStuffingSoundUpdate, addr 0x143f94c, size 0x4b4, virtual false, abstract: false, final false
  inline void DoStuffingSoundUpdate();

  /// @brief Method FlushStuffingSaveQueue, addr 0x143f8bc, size 0x90, virtual false, abstract: false, final false
  static inline void FlushStuffingSaveQueue();

  /// @brief Method HasEnoughStuffing, addr 0x143feb8, size 0x54, virtual false, abstract: false, final false
  static inline bool HasEnoughStuffing(int32_t threshold);

  static inline ::GlobalNamespace::StuffingManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x143f780, size 0xc8, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnApplicationFocus, addr 0x143fe00, size 0x60, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method OnApplicationQuit, addr 0x143fe60, size 0x58, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnLocalPlayerCurrencyChanged, addr 0x1441488, size 0xc, virtual false, abstract: false, final false
  inline void OnLocalPlayerCurrencyChanged(int32_t newCurrency, bool isDeduction);

  /// @brief Method OnReceiveDoTransferAnimation, addr 0x1440ae4, size 0x2e0, virtual false, abstract: false, final false
  inline void OnReceiveDoTransferAnimation(::StringW userID, ::GlobalNamespace::ItemTransformationData source, ::GlobalNamespace::__StuffingManager__TransferType transferType, int32_t amount);

  /// @brief Method PlayPurchaseSuccessSound, addr 0x1441494, size 0x148, virtual false, abstract: false, final false
  inline void PlayPurchaseSuccessSound();

  /// @brief Method QueueStuffingEnterSound, addr 0x14411c8, size 0x2c0, virtual false, abstract: false, final false
  inline void QueueStuffingEnterSound(::StringW userID, ::GlobalNamespace::__StuffingManager__TransferType transferType);

  /// @brief Method SendAddStuffing, addr 0x14406f8, size 0x130, virtual false, abstract: false, final false
  static inline bool SendAddStuffing(int32_t amount, ::GlobalNamespace::MapObject* sourceMapObject);

  /// @brief Method SendAddStuffing, addr 0x1440828, size 0x128, virtual false, abstract: false, final false
  static inline bool SendAddStuffing(int32_t amount, ::UnityEngine::Vector3 worldSource);

  /// @brief Method SendAddStuffing, addr 0x144051c, size 0x64, virtual false, abstract: false, final false
  static inline void SendAddStuffing(int32_t amount);

  /// @brief Method SendAddStuffing, addr 0x14405f4, size 0x104, virtual false, abstract: false, final false
  static inline void SendAddStuffing(int32_t amount, ::GlobalNamespace::Item* sourceItem);

  /// @brief Method SendClearStuffing, addr 0x14402cc, size 0x110, virtual false, abstract: false, final false
  static inline void SendClearStuffing(::UnityEngine::Vector3 worldSource);

  /// @brief Method SendDoTransferAnimation, addr 0x1440950, size 0x194, virtual false, abstract: false, final false
  inline void SendDoTransferAnimation(::GlobalNamespace::ItemTransformationData source, ::GlobalNamespace::__StuffingManager__TransferType transferType, int32_t amount);

  /// @brief Method SendDoTransferAnimation, addr 0x1440140, size 0x18c, virtual false, abstract: false, final false
  inline void SendDoTransferAnimation(::GlobalNamespace::Item* sourceItem, ::GlobalNamespace::__StuffingManager__TransferType transferType, int32_t amount);

  /// @brief Method SendDoTransferAnimation, addr 0x14403dc, size 0x140, virtual false, abstract: false, final false
  inline void SendDoTransferAnimation(::UnityEngine::Vector3 worldPosition, ::GlobalNamespace::__StuffingManager__TransferType transferType, int32_t amount);

  /// @brief Method SetMasterPlayerStuffingCount, addr 0x143f464, size 0x1bc, virtual false, abstract: false, final false
  static inline void SetMasterPlayerStuffingCount(int32_t newCount);

  /// @brief Method Start, addr 0x143f620, size 0x160, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TrySendSpendStuffingOnItem, addr 0x143ff70, size 0x1d0, virtual false, abstract: false, final false
  static inline bool TrySendSpendStuffingOnItem(int32_t amount, ::GlobalNamespace::Item* target);

  /// @brief Method TrySpendStuffingSilent, addr 0x143ff0c, size 0x64, virtual false, abstract: false, final false
  static inline bool TrySpendStuffingSilent(int32_t amount);

  /// @brief Method Update, addr 0x143f848, size 0x74, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged*& __cordl_internal_get_onMasterPlayerStuffingCountChangedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged*> const&
  __cordl_internal_get_onMasterPlayerStuffingCountChangedCallbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>, float_t>*&
  __cordl_internal_get_stuffingEnterSoundTimers();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>, float_t>*> const&
  __cordl_internal_get_stuffingEnterSoundTimers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>,
                                                         ::UnityW<::UnityEngine::AudioSource>>*&
  __cordl_internal_get_stuffingEnterSounds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>, ::UnityW<::UnityEngine::AudioSource>>*> const&
  __cordl_internal_get_stuffingEnterSounds() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_stuffingTransferEffectPrefabs() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_stuffingTransferEffectPrefabs();

  constexpr ::GlobalNamespace::__StuffingManager__TransferType const& __cordl_internal_get_transferTypeReference() const;

  constexpr ::GlobalNamespace::__StuffingManager__TransferType& __cordl_internal_get_transferTypeReference();

  constexpr void __cordl_internal_set_onMasterPlayerStuffingCountChangedCallbacks(::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged* value);

  constexpr void __cordl_internal_set_stuffingEnterSoundTimers(
      ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>, float_t>* value);

  constexpr void
  __cordl_internal_set_stuffingEnterSounds(::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>,
                                                                                        ::UnityW<::UnityEngine::AudioSource>>* value);

  constexpr void __cordl_internal_set_stuffingTransferEffectPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_transferTypeReference(::GlobalNamespace::__StuffingManager__TransferType value);

  /// @brief Method .ctor, addr 0x14415dc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__masterPlayerStuffingCount_k__BackingField();

  static inline bool getStaticF_hasStuffingCountSaveQueued();

  static inline float_t getStaticF_nextStuffingCountSaveTime();

  /// @brief Method get_masterPlayerStuffingCount, addr 0x143f3d0, size 0x48, virtual false, abstract: false, final false
  static inline int32_t get_masterPlayerStuffingCount();

  static inline void setStaticF__masterPlayerStuffingCount_k__BackingField(int32_t value);

  static inline void setStaticF_hasStuffingCountSaveQueued(bool value);

  static inline void setStaticF_nextStuffingCountSaveTime(float_t value);

  /// @brief Method set_masterPlayerStuffingCount, addr 0x143f418, size 0x4c, virtual false, abstract: false, final false
  static inline void set_masterPlayerStuffingCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StuffingManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StuffingManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StuffingManager(StuffingManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StuffingManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StuffingManager(StuffingManager const&) = delete;

  /// @brief Field onMasterPlayerStuffingCountChangedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged* ___onMasterPlayerStuffingCountChangedCallbacks;

  /// @brief Field transferTypeReference, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__StuffingManager__TransferType ___transferTypeReference;

  /// @brief Field stuffingTransferEffectPrefabs, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___stuffingTransferEffectPrefabs;

  /// @brief Field stuffingEnterSounds, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>, ::UnityW<::UnityEngine::AudioSource>>*
      ___stuffingEnterSounds;

  /// @brief Field stuffingEnterSoundTimers, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::__StuffingManager__TransferType>, float_t>* ___stuffingEnterSoundTimers;

  /// @brief Field CURRENCY_ENTER_PUPPET_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CURRENCY_ENTER_PUPPET_SOUND_KEY{ u"currencyEnterPuppet" };

  /// @brief Field CURRENCY_ENTER_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CURRENCY_ENTER_SOUND_KEY{ u"currencyEnter" };

  /// @brief Field PARTICLE_ENTER_SOUND_LENGTH offset 0xffffffff size 0x4
  static constexpr float_t PARTICLE_ENTER_SOUND_LENGTH{ 0.1 };

  /// @brief Field PURCHASE_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PURCHASE_SOUND_KEY{ u"currencyPurchase" };

  /// @brief Field PURCHASE_SOUND_PUPPET_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PURCHASE_SOUND_PUPPET_KEY{ u"currencyPurchasePuppet" };

  /// @brief Field STUFFING_ENTER_PUPPET_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString STUFFING_ENTER_PUPPET_SOUND_KEY{ u"stuffingEnterPuppet" };

  /// @brief Field STUFFING_ENTER_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString STUFFING_ENTER_SOUND_KEY{ u"stuffingEnter" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Stuffing: " };

  /// @brief Field defaultPlayerStuffingCount offset 0xffffffff size 0x4
  static constexpr int32_t defaultPlayerStuffingCount{ static_cast<int32_t>(0x9c4) };

  /// @brief Field maxPlayerStuffingCount offset 0xffffffff size 0x4
  static constexpr int32_t maxPlayerStuffingCount{ static_cast<int32_t>(0x1388) };

  /// @brief Field stuffingAnimationDuration offset 0xffffffff size 0x4
  static constexpr float_t stuffingAnimationDuration{ 0.75 };

  /// @brief Field stuffingCountPlayerPrefKey offset 0xffffffff size 0x8
  static constexpr ::ConstString stuffingCountPlayerPrefKey{ u"stuffingCount" };

  /// @brief Field stuffingCountSaveDelay offset 0xffffffff size 0x4
  static constexpr float_t stuffingCountSaveDelay{ 10.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StuffingManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingManager, ___onMasterPlayerStuffingCountChangedCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingManager, ___transferTypeReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingManager, ___stuffingTransferEffectPrefabs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingManager, ___stuffingEnterSounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StuffingManager, ___stuffingEnterSoundTimers) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StuffingManager__TransferType, "", "StuffingManager/TransferType");
NEED_NO_BOX(::GlobalNamespace::StuffingManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StuffingManager*, "", "StuffingManager");
NEED_NO_BOX(::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StuffingManager__OnMasterPlayerStuffingCountChanged*, "", "StuffingManager/OnMasterPlayerStuffingCountChanged");
