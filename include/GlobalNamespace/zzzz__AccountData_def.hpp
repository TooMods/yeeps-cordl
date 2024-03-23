#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AccountData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccountData)
namespace GlobalNamespace {
struct __AccountData__BanType;
}
namespace GlobalNamespace {
class __AccountData__OnActiveCosmeticsUpdated;
}
namespace GlobalNamespace {
class __AccountData__OnCurrencyUpdated;
}
namespace GlobalNamespace {
class __AccountData__OnFocusCurrency;
}
namespace GlobalNamespace {
class __AccountData__OnHasCreatorPackUpdated;
}
namespace GlobalNamespace {
class __AccountData__OnHasUnlockedPrivateRoomsUpdated;
}
namespace GlobalNamespace {
class __AccountData__OnOwnedItemsUpdated;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AccountData__BanType;
}
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class __AccountData__OnActiveCosmeticsUpdated;
}
namespace GlobalNamespace {
class __AccountData__OnCurrencyUpdated;
}
namespace GlobalNamespace {
class __AccountData__OnFocusCurrency;
}
namespace GlobalNamespace {
class __AccountData__OnHasCreatorPackUpdated;
}
namespace GlobalNamespace {
class __AccountData__OnHasUnlockedPrivateRoomsUpdated;
}
namespace GlobalNamespace {
class __AccountData__OnOwnedItemsUpdated;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AccountData__BanType);
MARK_REF_PTR_T(::GlobalNamespace::AccountData);
MARK_REF_PTR_T(::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__AccountData__OnCurrencyUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__AccountData__OnFocusCurrency);
MARK_REF_PTR_T(::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__AccountData__OnOwnedItemsUpdated);
// Type: ::BanType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountData::BanType
struct CORDL_TYPE __AccountData__BanType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AccountData__BanType_Unwrapped
  enum struct ____AccountData__BanType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Temporary = static_cast<int32_t>(0x1),
    __E_Permanent = static_cast<int32_t>(0x2),
    __E_Warning = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AccountData__BanType_Unwrapped() const noexcept {
    return static_cast<____AccountData__BanType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountData__BanType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AccountData__BanType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AccountData__BanType const None;

  /// @brief Field Permanent value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AccountData__BanType const Permanent;

  /// @brief Field Temporary value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AccountData__BanType const Temporary;

  /// @brief Field Warning value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__AccountData__BanType const Warning;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountData__BanType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountData__BanType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnCurrencyUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountData::OnCurrencyUpdated*
class CORDL_TYPE __AccountData__OnCurrencyUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e0bc28, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t newCurrency, bool isDeduction, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e0bce4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e0bc10, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(int32_t newCurrency, bool isDeduction);

  static inline ::GlobalNamespace::__AccountData__OnCurrencyUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e0bb4c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountData__OnCurrencyUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnCurrencyUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountData__OnCurrencyUpdated(__AccountData__OnCurrencyUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnCurrencyUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountData__OnCurrencyUpdated(__AccountData__OnCurrencyUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountData__OnCurrencyUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFocusCurrency
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountData::OnFocusCurrency*
class CORDL_TYPE __AccountData__OnFocusCurrency : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e0bdc0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e0bde0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e0bdac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__AccountData__OnFocusCurrency* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e0bcf0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountData__OnFocusCurrency();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnFocusCurrency", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountData__OnFocusCurrency(__AccountData__OnFocusCurrency&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnFocusCurrency", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountData__OnFocusCurrency(__AccountData__OnFocusCurrency const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountData__OnFocusCurrency, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnOwnedItemsUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountData::OnOwnedItemsUpdated*
class CORDL_TYPE __AccountData__OnOwnedItemsUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e0bf2c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::StringW>* newOwnedItemKeys, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e0bf4c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e0bf18, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Collections::Generic::List_1<::StringW>* newOwnedItemKeys);

  static inline ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e0bdec, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountData__OnOwnedItemsUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnOwnedItemsUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountData__OnOwnedItemsUpdated(__AccountData__OnOwnedItemsUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnOwnedItemsUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountData__OnOwnedItemsUpdated(__AccountData__OnOwnedItemsUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnActiveCosmeticsUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountData::OnActiveCosmeticsUpdated*
class CORDL_TYPE __AccountData__OnActiveCosmeticsUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e0c09c, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::StringW>* newActiveCosmeticKeys,
                                             ::System::Collections::Generic::List_1<::StringW>* removedConflictingCosmeticKeys, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e0c0c4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e0c088, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Collections::Generic::List_1<::StringW>* newActiveCosmeticKeys, ::System::Collections::Generic::List_1<::StringW>* removedConflictingCosmeticKeys);

  static inline ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e0bf58, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountData__OnActiveCosmeticsUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnActiveCosmeticsUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountData__OnActiveCosmeticsUpdated(__AccountData__OnActiveCosmeticsUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnActiveCosmeticsUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountData__OnActiveCosmeticsUpdated(__AccountData__OnActiveCosmeticsUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnHasUnlockedPrivateRoomsUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountData::OnHasUnlockedPrivateRoomsUpdated*
class CORDL_TYPE __AccountData__OnHasUnlockedPrivateRoomsUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e0c1ac, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newHasUnlockedPrivateRooms, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e0c234, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e0c194, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newHasUnlockedPrivateRooms);

  static inline ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e0c0d0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountData__OnHasUnlockedPrivateRoomsUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnHasUnlockedPrivateRoomsUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountData__OnHasUnlockedPrivateRoomsUpdated(__AccountData__OnHasUnlockedPrivateRoomsUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnHasUnlockedPrivateRoomsUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountData__OnHasUnlockedPrivateRoomsUpdated(__AccountData__OnHasUnlockedPrivateRoomsUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnHasCreatorPackUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountData::OnHasCreatorPackUpdated*
class CORDL_TYPE __AccountData__OnHasCreatorPackUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2e0c31c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newHasCreatorPack, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2e0c3a4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2e0c304, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newHasCreatorPack);

  static inline ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2e0c240, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountData__OnHasCreatorPackUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnHasCreatorPackUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountData__OnHasCreatorPackUpdated(__AccountData__OnHasCreatorPackUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountData__OnHasCreatorPackUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountData__OnHasCreatorPackUpdated(__AccountData__OnHasCreatorPackUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AccountData
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountData*
class CORDL_TYPE AccountData : public ::System::Object {
public:
  // Declarations
  using BanType = ::GlobalNamespace::__AccountData__BanType;

  using OnActiveCosmeticsUpdated = ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated;

  using OnCurrencyUpdated = ::GlobalNamespace::__AccountData__OnCurrencyUpdated;

  using OnFocusCurrency = ::GlobalNamespace::__AccountData__OnFocusCurrency;

  using OnHasCreatorPackUpdated = ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated;

  using OnHasUnlockedPrivateRoomsUpdated = ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated;

  using OnOwnedItemsUpdated = ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated;

  /// @brief Field <isIsolated>k__BackingField, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get__isIsolated_k__BackingField, put = __cordl_internal_set__isIsolated_k__BackingField)) bool _isIsolated_k__BackingField;

  /// @brief Field accountCreatedDate, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_accountCreatedDate, put = __cordl_internal_set_accountCreatedDate))::System::DateTime accountCreatedDate;

  /// @brief Field activeCosmeticKeys, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_activeCosmeticKeys, put = __cordl_internal_set_activeCosmeticKeys))::System::Collections::Generic::List_1<::StringW>* activeCosmeticKeys;

  /// @brief Field analyticEventKeys, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_analyticEventKeys, put = __cordl_internal_set_analyticEventKeys))::System::Collections::Generic::List_1<::StringW>* analyticEventKeys;

  /// @brief Field avatarEyeColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_avatarEyeColor, put = __cordl_internal_set_avatarEyeColor))::UnityEngine::Color avatarEyeColor;

  /// @brief Field avatarSkinColor, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_avatarSkinColor, put = __cordl_internal_set_avatarSkinColor))::UnityEngine::Color avatarSkinColor;

  /// @brief Field banLengthHours, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_banLengthHours, put = __cordl_internal_set_banLengthHours)) int32_t banLengthHours;

  /// @brief Field banReason, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_banReason, put = __cordl_internal_set_banReason))::StringW banReason;

  /// @brief Field banType, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_banType, put = __cordl_internal_set_banType))::GlobalNamespace::__AccountData__BanType banType;

  /// @brief Field currency, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_currency, put = __cordl_internal_set_currency)) int32_t currency;

  /// @brief Field displayName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName))::StringW displayName;

  /// @brief Field hasCreatorPack, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_hasCreatorPack, put = __cordl_internal_set_hasCreatorPack)) bool hasCreatorPack;

  /// @brief Field hasUnlockedPrivateRooms, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_hasUnlockedPrivateRooms, put = __cordl_internal_set_hasUnlockedPrivateRooms)) bool hasUnlockedPrivateRooms;

  __declspec(property(get = get_isIsolated, put = set_isIsolated)) bool isIsolated;

  /// @brief Field lastRedeemedChallengeTimes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_lastRedeemedChallengeTimes,
                      put = __cordl_internal_set_lastRedeemedChallengeTimes))::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>* lastRedeemedChallengeTimes;

  /// @brief Field mobileCode, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mobileCode, put = __cordl_internal_set_mobileCode))::StringW mobileCode;

  /// @brief Field onActiveCosmeticsUpdatedCallbacks, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_onActiveCosmeticsUpdatedCallbacks,
                      put = __cordl_internal_set_onActiveCosmeticsUpdatedCallbacks))::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* onActiveCosmeticsUpdatedCallbacks;

  /// @brief Field onCurrencyUpdatedCallbacks, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_onCurrencyUpdatedCallbacks,
                      put = __cordl_internal_set_onCurrencyUpdatedCallbacks))::GlobalNamespace::__AccountData__OnCurrencyUpdated* onCurrencyUpdatedCallbacks;

  /// @brief Field onFocusCurrencyCallbacks, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_onFocusCurrencyCallbacks,
                      put = __cordl_internal_set_onFocusCurrencyCallbacks))::GlobalNamespace::__AccountData__OnFocusCurrency* onFocusCurrencyCallbacks;

  /// @brief Field onHasCreatorPackUpdated, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_onHasCreatorPackUpdated,
                      put = __cordl_internal_set_onHasCreatorPackUpdated))::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated* onHasCreatorPackUpdated;

  /// @brief Field onHasUnlockedPrivateRoomsUpdated, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_onHasUnlockedPrivateRoomsUpdated,
                      put = __cordl_internal_set_onHasUnlockedPrivateRoomsUpdated))::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated* onHasUnlockedPrivateRoomsUpdated;

  /// @brief Field onOwnedItemKeysUpdatedCallbacks, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_onOwnedItemKeysUpdatedCallbacks,
                      put = __cordl_internal_set_onOwnedItemKeysUpdatedCallbacks))::GlobalNamespace::__AccountData__OnOwnedItemsUpdated* onOwnedItemKeysUpdatedCallbacks;

  /// @brief Field ownedBundleKeys, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_ownedBundleKeys, put = __cordl_internal_set_ownedBundleKeys))::System::Collections::Generic::List_1<::StringW>* ownedBundleKeys;

  /// @brief Field ownedItemKeys, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ownedItemKeys, put = __cordl_internal_set_ownedItemKeys))::System::Collections::Generic::List_1<::StringW>* ownedItemKeys;

  /// @brief Field redeemedCurrencyStashIDs, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_redeemedCurrencyStashIDs,
                      put = __cordl_internal_set_redeemedCurrencyStashIDs))::System::Collections::Generic::List_1<::StringW>* redeemedCurrencyStashIDs;

  /// @brief Field roleKeys, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_roleKeys, put = __cordl_internal_set_roleKeys))::System::Collections::Generic::List_1<::StringW>* roleKeys;

  /// @brief Method AddAnalyticEventKeyLocally, addr 0x2e0ba54, size 0xf0, virtual false, abstract: false, final false
  inline void AddAnalyticEventKeyLocally(::StringW analyticEventKey);

  /// @brief Method AddBundleKeyLocally, addr 0x2e0acb8, size 0x11c, virtual false, abstract: false, final false
  inline void AddBundleKeyLocally(::StringW bundleKey);

  /// @brief Method AddCurrencyLocally, addr 0x2e0997c, size 0xc, virtual false, abstract: false, final false
  inline void AddCurrencyLocally(int32_t count);

  /// @brief Method AddItemLocally, addr 0x2e09ab8, size 0x1b0, virtual false, abstract: false, final false
  inline bool AddItemLocally(::StringW itemKey);

  /// @brief Method AddItemsLocally, addr 0x2e09c68, size 0x320, virtual false, abstract: false, final false
  inline bool AddItemsLocally(::System::Collections::Generic::List_1<::StringW>* itemKeys);

  /// @brief Method AddRedeemedCurrencyStashIDLocally, addr 0x2e0b09c, size 0x11c, virtual false, abstract: false, final false
  inline void AddRedeemedCurrencyStashIDLocally(::StringW currencyStashID);

  /// @brief Method ClearWarning, addr 0x2e0b9e0, size 0x14, virtual false, abstract: false, final false
  inline void ClearWarning();

  /// @brief Method EquipCosmetic, addr 0x2e0a31c, size 0x2b0, virtual false, abstract: false, final false
  inline bool EquipCosmetic(::StringW cosmeticKey);

  /// @brief Method EquipCosmetics, addr 0x2e0a5cc, size 0x3bc, virtual false, abstract: false, final false
  inline bool EquipCosmetics(::System::Collections::Generic::List_1<::StringW>* cosmeticKeys);

  /// @brief Method FocusCurrency, addr 0x2e09994, size 0xa4, virtual false, abstract: false, final false
  inline void FocusCurrency();

  /// @brief Method GetAccountCreatedDate, addr 0x2e0bb44, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime GetAccountCreatedDate();

  /// @brief Method GetActiveCosmeticKeys, addr 0x2e0a29c, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetActiveCosmeticKeys();

  /// @brief Method GetAvatarIdentityData, addr 0x2e0980c, size 0x14, virtual false, abstract: false, final false
  inline void GetAvatarIdentityData(ByRef<::UnityEngine::Color> skinColor, ByRef<::UnityEngine::Color> eyeColor);

  /// @brief Method GetBanMessage, addr 0x2e0b5c8, size 0x40c, virtual false, abstract: false, final false
  inline ::StringW GetBanMessage();

  /// @brief Method GetBanReason, addr 0x2e0b5c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetBanReason();

  /// @brief Method GetCurrency, addr 0x2e0998c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetCurrency();

  /// @brief Method GetDisplayName, addr 0x2e09820, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetDisplayName();

  /// @brief Method GetHasCreatorPack, addr 0x2e0b2bc, size 0x8, virtual false, abstract: false, final false
  inline bool GetHasCreatorPack();

  /// @brief Method GetHasUnlockedPrivateRooms, addr 0x2e0b1b8, size 0x8, virtual false, abstract: false, final false
  inline bool GetHasUnlockedPrivateRooms();

  /// @brief Method GetIsBanned, addr 0x2e0b594, size 0x1c, virtual false, abstract: false, final false
  inline bool GetIsBanned();

  /// @brief Method GetIsWarned, addr 0x2e0b5b0, size 0x10, virtual false, abstract: false, final false
  inline bool GetIsWarned();

  /// @brief Method GetLastRedeemedChallengeTime, addr 0x2e0ade4, size 0xa8, virtual false, abstract: false, final false
  inline ::System::DateTime GetLastRedeemedChallengeTime(::StringW poolKey);

  /// @brief Method GetMobileCode, addr 0x2e0add4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetMobileCode();

  /// @brief Method GetOwnedItemKeys, addr 0x2e09a38, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetOwnedItemKeys();

  /// @brief Method GetRedeemedCurrencyStashIDs, addr 0x2e0afbc, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetRedeemedCurrencyStashIDs();

  /// @brief Method GetRoleKeys, addr 0x2e0b2c4, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetRoleKeys();

  /// @brief Method HasAnalyticEventKey, addr 0x2e0b9f4, size 0x60, virtual false, abstract: false, final false
  inline bool HasAnalyticEventKey(::StringW analyticEvent);

  /// @brief Method HasOwnedBundle, addr 0x2e0ac58, size 0x60, virtual false, abstract: false, final false
  inline bool HasOwnedBundle(::StringW bundleKey);

  /// @brief Method HasRedeemedStash, addr 0x2e0b03c, size 0x60, virtual false, abstract: false, final false
  inline bool HasRedeemedStash(::StringW currencyStashID);

  /// @brief Method ManualSetOwnedItemKeysLocally, addr 0x2e09f88, size 0x1f4, virtual false, abstract: false, final false
  inline bool ManualSetOwnedItemKeysLocally(::System::Collections::Generic::List_1<::StringW>* newItemKeys);

  /// @brief Method MarkChallengeAsRedeemedLocally, addr 0x2e0ae8c, size 0x130, virtual false, abstract: false, final false
  inline void MarkChallengeAsRedeemedLocally(::StringW poolKey);

  static inline ::GlobalNamespace::AccountData*
  New_ctor(::UnityEngine::Color avatarSkinColor, ::UnityEngine::Color avatarEyeColor, ::StringW displayName, int32_t currency, ::System::Collections::Generic::List_1<::StringW>* ownedItemKeys,
           ::System::Collections::Generic::List_1<::StringW>* activeCosmeticKeys, ::System::Collections::Generic::List_1<::StringW>* ownedBundleKeys, ::StringW mobileCode,
           ::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>* lastRedeemedChallengeTimes, ::System::Collections::Generic::List_1<::StringW>* redeemedCurrencyStashIDs,
           bool hasUnlockedPrivateRooms, bool hasCreatorPack, bool isIsolated, ::System::Collections::Generic::List_1<::StringW>* roleKeys,
           ::System::Collections::Generic::List_1<::StringW>* analyticEventKeys, ::System::DateTime accountCreatedDate, ::GlobalNamespace::__AccountData__BanType banType, int32_t banLengthSeconds,
           ::StringW banReason, ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* onCosmeticsUpdatedCallback);

  /// @brief Method RemoveOwnedItemLocally, addr 0x2e0a17c, size 0x120, virtual false, abstract: false, final false
  inline bool RemoveOwnedItemLocally(::StringW itemKey);

  /// @brief Method ResetCurrencyLocally, addr 0x2e09988, size 0x4, virtual false, abstract: false, final false
  inline void ResetCurrencyLocally(int32_t newAmount);

  /// @brief Method SaveStringListToPlayerPrefs, addr 0x2e0b344, size 0x184, virtual false, abstract: false, final false
  static inline void SaveStringListToPlayerPrefs(::StringW playerPrefKey, ::System::Collections::Generic::List_1<::StringW>* list);

  /// @brief Method SetBanLocally, addr 0x2e0b9d4, size 0xc, virtual false, abstract: false, final false
  inline void SetBanLocally(::GlobalNamespace::__AccountData__BanType banType, int32_t banLengthHours, ::StringW banMessage);

  /// @brief Method SetCurrencyLocally, addr 0x2e09828, size 0x154, virtual false, abstract: false, final false
  inline void SetCurrencyLocally(int32_t currency);

  /// @brief Method SetHasCreatorPackLocally, addr 0x2e075c0, size 0xfc, virtual false, abstract: false, final false
  inline void SetHasCreatorPackLocally(bool newHasCreatorPack);

  /// @brief Method SetHasUnlockedPrivateRoomsLocally, addr 0x2e0b1c0, size 0xfc, virtual false, abstract: false, final false
  inline void SetHasUnlockedPrivateRoomsLocally(bool newHasUnlockedPrivateRooms);

  /// @brief Method SetMobileCodeLocally, addr 0x2e0addc, size 0x8, virtual false, abstract: false, final false
  inline void SetMobileCodeLocally(::StringW newCode);

  /// @brief Method TryDeductCurrencyLocally, addr 0x2e07598, size 0x28, virtual false, abstract: false, final false
  inline bool TryDeductCurrencyLocally(int32_t count);

  /// @brief Method TryLoadStringListFromPlayerPrefs, addr 0x2e0b4c8, size 0xcc, virtual false, abstract: false, final false
  static inline bool TryLoadStringListFromPlayerPrefs(::StringW playerPrefKey, ByRef<::System::Collections::Generic::List_1<::StringW>*> list);

  /// @brief Method UnequipCosmetic, addr 0x2e0a988, size 0xf8, virtual false, abstract: false, final false
  inline bool UnequipCosmetic(::StringW cosmeticKey);

  /// @brief Method UnequipCosmetics, addr 0x2e0aa80, size 0x1d8, virtual false, abstract: false, final false
  inline bool UnequipCosmetics(::System::Collections::Generic::List_1<::StringW>* cosmeticKeys);

  constexpr bool const& __cordl_internal_get__isIsolated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isIsolated_k__BackingField();

  constexpr ::System::DateTime const& __cordl_internal_get_accountCreatedDate() const;

  constexpr ::System::DateTime& __cordl_internal_get_accountCreatedDate();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_activeCosmeticKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_activeCosmeticKeys() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_analyticEventKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_analyticEventKeys() const;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_avatarEyeColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_avatarEyeColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_avatarSkinColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_avatarSkinColor();

  constexpr int32_t const& __cordl_internal_get_banLengthHours() const;

  constexpr int32_t& __cordl_internal_get_banLengthHours();

  constexpr ::StringW const& __cordl_internal_get_banReason() const;

  constexpr ::StringW& __cordl_internal_get_banReason();

  constexpr ::GlobalNamespace::__AccountData__BanType const& __cordl_internal_get_banType() const;

  constexpr ::GlobalNamespace::__AccountData__BanType& __cordl_internal_get_banType();

  constexpr int32_t const& __cordl_internal_get_currency() const;

  constexpr int32_t& __cordl_internal_get_currency();

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr bool const& __cordl_internal_get_hasCreatorPack() const;

  constexpr bool& __cordl_internal_get_hasCreatorPack();

  constexpr bool const& __cordl_internal_get_hasUnlockedPrivateRooms() const;

  constexpr bool& __cordl_internal_get_hasUnlockedPrivateRooms();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>*& __cordl_internal_get_lastRedeemedChallengeTimes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>*> const& __cordl_internal_get_lastRedeemedChallengeTimes() const;

  constexpr ::StringW const& __cordl_internal_get_mobileCode() const;

  constexpr ::StringW& __cordl_internal_get_mobileCode();

  constexpr ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*& __cordl_internal_get_onActiveCosmeticsUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*> const& __cordl_internal_get_onActiveCosmeticsUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__AccountData__OnCurrencyUpdated*& __cordl_internal_get_onCurrencyUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnCurrencyUpdated*> const& __cordl_internal_get_onCurrencyUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__AccountData__OnFocusCurrency*& __cordl_internal_get_onFocusCurrencyCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnFocusCurrency*> const& __cordl_internal_get_onFocusCurrencyCallbacks() const;

  constexpr ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*& __cordl_internal_get_onHasCreatorPackUpdated();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*> const& __cordl_internal_get_onHasCreatorPackUpdated() const;

  constexpr ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*& __cordl_internal_get_onHasUnlockedPrivateRoomsUpdated();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*> const& __cordl_internal_get_onHasUnlockedPrivateRoomsUpdated() const;

  constexpr ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*& __cordl_internal_get_onOwnedItemKeysUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*> const& __cordl_internal_get_onOwnedItemKeysUpdatedCallbacks() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ownedBundleKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_ownedBundleKeys() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ownedItemKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_ownedItemKeys() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_redeemedCurrencyStashIDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_redeemedCurrencyStashIDs() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_roleKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_roleKeys() const;

  constexpr void __cordl_internal_set__isIsolated_k__BackingField(bool value);

  constexpr void __cordl_internal_set_accountCreatedDate(::System::DateTime value);

  constexpr void __cordl_internal_set_activeCosmeticKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_analyticEventKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_avatarEyeColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_avatarSkinColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_banLengthHours(int32_t value);

  constexpr void __cordl_internal_set_banReason(::StringW value);

  constexpr void __cordl_internal_set_banType(::GlobalNamespace::__AccountData__BanType value);

  constexpr void __cordl_internal_set_currency(int32_t value);

  constexpr void __cordl_internal_set_displayName(::StringW value);

  constexpr void __cordl_internal_set_hasCreatorPack(bool value);

  constexpr void __cordl_internal_set_hasUnlockedPrivateRooms(bool value);

  constexpr void __cordl_internal_set_lastRedeemedChallengeTimes(::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>* value);

  constexpr void __cordl_internal_set_mobileCode(::StringW value);

  constexpr void __cordl_internal_set_onActiveCosmeticsUpdatedCallbacks(::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* value);

  constexpr void __cordl_internal_set_onCurrencyUpdatedCallbacks(::GlobalNamespace::__AccountData__OnCurrencyUpdated* value);

  constexpr void __cordl_internal_set_onFocusCurrencyCallbacks(::GlobalNamespace::__AccountData__OnFocusCurrency* value);

  constexpr void __cordl_internal_set_onHasCreatorPackUpdated(::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated* value);

  constexpr void __cordl_internal_set_onHasUnlockedPrivateRoomsUpdated(::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated* value);

  constexpr void __cordl_internal_set_onOwnedItemKeysUpdatedCallbacks(::GlobalNamespace::__AccountData__OnOwnedItemsUpdated* value);

  constexpr void __cordl_internal_set_ownedBundleKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_ownedItemKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_redeemedCurrencyStashIDs(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_roleKeys(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2e09620, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color avatarSkinColor, ::UnityEngine::Color avatarEyeColor, ::StringW displayName, int32_t currency,
                    ::System::Collections::Generic::List_1<::StringW>* ownedItemKeys, ::System::Collections::Generic::List_1<::StringW>* activeCosmeticKeys,
                    ::System::Collections::Generic::List_1<::StringW>* ownedBundleKeys, ::StringW mobileCode,
                    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>* lastRedeemedChallengeTimes,
                    ::System::Collections::Generic::List_1<::StringW>* redeemedCurrencyStashIDs, bool hasUnlockedPrivateRooms, bool hasCreatorPack, bool isIsolated,
                    ::System::Collections::Generic::List_1<::StringW>* roleKeys, ::System::Collections::Generic::List_1<::StringW>* analyticEventKeys, ::System::DateTime accountCreatedDate,
                    ::GlobalNamespace::__AccountData__BanType banType, int32_t banLengthSeconds, ::StringW banReason,
                    ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* onCosmeticsUpdatedCallback);

  /// @brief Method get_isIsolated, addr 0x2e0960c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isIsolated();

  /// @brief Method set_isIsolated, addr 0x2e09614, size 0xc, virtual false, abstract: false, final false
  inline void set_isIsolated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccountData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccountData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccountData(AccountData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccountData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccountData(AccountData const&) = delete;

  /// @brief Field avatarSkinColor, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___avatarSkinColor;

  /// @brief Field avatarEyeColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___avatarEyeColor;

  /// @brief Field displayName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field currency, offset: 0x38, size: 0x4, def value: None
  int32_t ___currency;

  /// @brief Field ownedItemKeys, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___ownedItemKeys;

  /// @brief Field activeCosmeticKeys, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___activeCosmeticKeys;

  /// @brief Field ownedBundleKeys, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___ownedBundleKeys;

  /// @brief Field mobileCode, offset: 0x58, size: 0x8, def value: None
  ::StringW ___mobileCode;

  /// @brief Field lastRedeemedChallengeTimes, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::DateTime>* ___lastRedeemedChallengeTimes;

  /// @brief Field redeemedCurrencyStashIDs, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___redeemedCurrencyStashIDs;

  /// @brief Field hasUnlockedPrivateRooms, offset: 0x70, size: 0x1, def value: None
  bool ___hasUnlockedPrivateRooms;

  /// @brief Field hasCreatorPack, offset: 0x71, size: 0x1, def value: None
  bool ___hasCreatorPack;

  /// @brief Field <isIsolated>k__BackingField, offset: 0x72, size: 0x1, def value: None
  bool ____isIsolated_k__BackingField;

  /// @brief Field roleKeys, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___roleKeys;

  /// @brief Field analyticEventKeys, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___analyticEventKeys;

  /// @brief Field accountCreatedDate, offset: 0x88, size: 0x8, def value: None
  ::System::DateTime ___accountCreatedDate;

  /// @brief Field banType, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::__AccountData__BanType ___banType;

  /// @brief Field banLengthHours, offset: 0x94, size: 0x4, def value: None
  int32_t ___banLengthHours;

  /// @brief Field banReason, offset: 0x98, size: 0x8, def value: None
  ::StringW ___banReason;

  /// @brief Field onCurrencyUpdatedCallbacks, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::__AccountData__OnCurrencyUpdated* ___onCurrencyUpdatedCallbacks;

  /// @brief Field onFocusCurrencyCallbacks, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::__AccountData__OnFocusCurrency* ___onFocusCurrencyCallbacks;

  /// @brief Field onOwnedItemKeysUpdatedCallbacks, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::__AccountData__OnOwnedItemsUpdated* ___onOwnedItemKeysUpdatedCallbacks;

  /// @brief Field onActiveCosmeticsUpdatedCallbacks, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated* ___onActiveCosmeticsUpdatedCallbacks;

  /// @brief Field onHasUnlockedPrivateRoomsUpdated, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated* ___onHasUnlockedPrivateRoomsUpdated;

  /// @brief Field onHasCreatorPackUpdated, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated* ___onHasCreatorPackUpdated;

  /// @brief Field DATA_VERSION offset 0xffffffff size 0x4
  static constexpr int32_t DATA_VERSION{ static_cast<int32_t>(0x0) };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Account Data: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AccountData, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___avatarSkinColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___avatarEyeColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___displayName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___currency) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___ownedItemKeys) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___activeCosmeticKeys) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___ownedBundleKeys) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___mobileCode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___lastRedeemedChallengeTimes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___redeemedCurrencyStashIDs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___hasUnlockedPrivateRooms) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___hasCreatorPack) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ____isIsolated_k__BackingField) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___roleKeys) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___analyticEventKeys) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___accountCreatedDate) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___banType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___banLengthHours) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___banReason) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___onCurrencyUpdatedCallbacks) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___onFocusCurrencyCallbacks) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___onOwnedItemKeysUpdatedCallbacks) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___onActiveCosmeticsUpdatedCallbacks) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___onHasUnlockedPrivateRoomsUpdated) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountData, ___onHasCreatorPackUpdated) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountData__BanType, "", "AccountData/BanType");
NEED_NO_BOX(::GlobalNamespace::AccountData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AccountData*, "", "AccountData");
NEED_NO_BOX(::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountData__OnActiveCosmeticsUpdated*, "", "AccountData/OnActiveCosmeticsUpdated");
NEED_NO_BOX(::GlobalNamespace::__AccountData__OnCurrencyUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountData__OnCurrencyUpdated*, "", "AccountData/OnCurrencyUpdated");
NEED_NO_BOX(::GlobalNamespace::__AccountData__OnFocusCurrency);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountData__OnFocusCurrency*, "", "AccountData/OnFocusCurrency");
NEED_NO_BOX(::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountData__OnHasCreatorPackUpdated*, "", "AccountData/OnHasCreatorPackUpdated");
NEED_NO_BOX(::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountData__OnHasUnlockedPrivateRoomsUpdated*, "", "AccountData/OnHasUnlockedPrivateRoomsUpdated");
NEED_NO_BOX(::GlobalNamespace::__AccountData__OnOwnedItemsUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountData__OnOwnedItemsUpdated*, "", "AccountData/OnOwnedItemsUpdated");
