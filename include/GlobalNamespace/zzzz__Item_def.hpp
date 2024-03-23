#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AvatarHand_def.hpp"
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Item)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class ItemDespawnZone;
}
namespace GlobalNamespace {
struct ItemTransformationData;
}
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class XRItemInteractable;
}
namespace GlobalNamespace {
struct __Item__AnchorState;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
class __Item__OnItemAnchorStateUpdatedDelegate;
}
namespace GlobalNamespace {
class __Item__OnItemDestroyedDelegate;
}
namespace GlobalNamespace {
class __Item__OnItemSwitchedOwnershipDelegate;
}
namespace GlobalNamespace {
struct __Item__Type;
}
namespace GlobalNamespace {
class __Item___LerpScale_d__135;
}
namespace GlobalNamespace {
class __Item___SetVelocityOnDelay_d__97;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __Item__AnchorState;
}
namespace GlobalNamespace {
struct __Item__Type;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
class __Item__OnItemAnchorStateUpdatedDelegate;
}
namespace GlobalNamespace {
class __Item__OnItemDestroyedDelegate;
}
namespace GlobalNamespace {
class __Item__OnItemSwitchedOwnershipDelegate;
}
namespace GlobalNamespace {
class __Item___LerpScale_d__135;
}
namespace GlobalNamespace {
class __Item___SetVelocityOnDelay_d__97;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__Item__AnchorState);
MARK_VAL_T(::GlobalNamespace::__Item__Type);
MARK_REF_PTR_T(::GlobalNamespace::Item);
MARK_REF_PTR_T(::GlobalNamespace::__Item__CustomParameters);
MARK_REF_PTR_T(::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__Item__OnItemDestroyedDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__Item___LerpScale_d__135);
MARK_REF_PTR_T(::GlobalNamespace::__Item___SetVelocityOnDelay_d__97);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Item::Type
struct CORDL_TYPE __Item__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Item__Type_Unwrapped
  enum struct ____Item__Type_Unwrapped : int32_t {
    __E_none = static_cast<int32_t>(0x0),
    __E_stuffed = static_cast<int32_t>(0x1),
    __E_pin = static_cast<int32_t>(0x2),
    __E_cosmetic = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Item__Type_Unwrapped() const noexcept {
    return static_cast<____Item__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Item__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Item__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field cosmetic value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__Item__Type const cosmetic;

  /// @brief Field none value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Item__Type const none;

  /// @brief Field pin value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Item__Type const pin;

  /// @brief Field stuffed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Item__Type const stuffed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Item__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item__Type, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CustomParameters
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Item::CustomParameters*
class CORDL_TYPE __Item__CustomParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_count)) int32_t count;

  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters))::ArrayW<::StringW, ::Array<::StringW>*> parameters;

  /// @brief Method Append, addr 0x2aa64b8, size 0x15c, virtual false, abstract: false, final false
  inline void Append(::StringW newEntry);

  /// @brief Method Deserialize, addr 0x2aa6620, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__Item__CustomParameters* Deserialize(::ArrayW<::StringW, ::Array<::StringW>*> parameters);

  /// @brief Method GetParameters, addr 0x2aa66d8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetParameters();

  static inline ::GlobalNamespace::__Item__CustomParameters* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> parameters);

  /// @brief Method ProcessSpecialFields, addr 0x2aa67f0, size 0x380, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__Item__CustomParameters* ProcessSpecialFields(::GlobalNamespace::__Item__CustomParameters* input);

  /// @brief Method Serialize, addr 0x2aa6614, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> Serialize(::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method ToString, addr 0x2aa66e0, size 0x110, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetParameter, addr 0x2aa6684, size 0x54, virtual false, abstract: false, final false
  inline bool TryGetParameter(int32_t index, ByRef<::StringW> parameter);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_parameters() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_parameters();

  constexpr void __cordl_internal_set_parameters(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x2aa3828, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> parameters);

  /// @brief Method get_count, addr 0x2aa649c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Item__CustomParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Item__CustomParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Item__CustomParameters(__Item__CustomParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Item__CustomParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Item__CustomParameters(__Item__CustomParameters const&) = delete;

  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___parameters;

  /// @brief Field accountIDSpecialField offset 0xffffffff size 0x8
  static constexpr ::ConstString accountIDSpecialField{ u"%ownerAccountID%" };

  /// @brief Field ownerUserIDSpecialField offset 0xffffffff size 0x8
  static constexpr ::ConstString ownerUserIDSpecialField{ u"%ownerUserID%" };

  /// @brief Field specialFieldPrefix offset 0xffffffff size 0x2
  static constexpr char16_t specialFieldPrefix{ u'%' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Item__CustomParameters, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item__CustomParameters, ___parameters) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AnchorState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Item::AnchorState
struct CORDL_TYPE __Item__AnchorState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Item__AnchorState_Unwrapped
  enum struct ____Item__AnchorState_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_World = static_cast<int32_t>(0x1),
    __E_Body = static_cast<int32_t>(0x2),
    __E_Head = static_cast<int32_t>(0x3),
    __E_HeadTop = static_cast<int32_t>(0x4),
    __E_HandRight = static_cast<int32_t>(0x5),
    __E_HandLeft = static_cast<int32_t>(0x6),
    __E_UpperArmRight = static_cast<int32_t>(0x7),
    __E_UpperArmLeft = static_cast<int32_t>(0x8),
    __E_LowerArmRight = static_cast<int32_t>(0x9),
    __E_LowerArmLeft = static_cast<int32_t>(0xa),
    __E_Item = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Item__AnchorState_Unwrapped() const noexcept {
    return static_cast<____Item__AnchorState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Item__AnchorState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Item__AnchorState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Body value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Item__AnchorState const Body;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__Item__AnchorState const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__Item__AnchorState const HandRight;

  /// @brief Field Head value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__Item__AnchorState const Head;

  /// @brief Field HeadTop value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__Item__AnchorState const HeadTop;

  /// @brief Field Item value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::__Item__AnchorState const Item;

  /// @brief Field LowerArmLeft value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__Item__AnchorState const LowerArmLeft;

  /// @brief Field LowerArmRight value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::__Item__AnchorState const LowerArmRight;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Item__AnchorState const None;

  /// @brief Field UpperArmLeft value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__Item__AnchorState const UpperArmLeft;

  /// @brief Field UpperArmRight value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__Item__AnchorState const UpperArmRight;

  /// @brief Field World value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Item__AnchorState const World;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Item__AnchorState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item__AnchorState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnItemDestroyedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Item::OnItemDestroyedDelegate*
class CORDL_TYPE __Item__OnItemDestroyedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2aa6cb0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Item* item, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2aa6cd0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2aa6c9c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Item* item);

  static inline ::GlobalNamespace::__Item__OnItemDestroyedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2aa6b70, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Item__OnItemDestroyedDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Item__OnItemDestroyedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Item__OnItemDestroyedDelegate(__Item__OnItemDestroyedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Item__OnItemDestroyedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Item__OnItemDestroyedDelegate(__Item__OnItemDestroyedDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Item__OnItemDestroyedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnItemSwitchedOwnershipDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Item::OnItemSwitchedOwnershipDelegate*
class CORDL_TYPE __Item__OnItemSwitchedOwnershipDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2aa6e20, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Item* item, ::GlobalNamespace::PlayerItemManager* newPlayerItemManager, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2aa6e48, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2aa6e0c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Item* item, ::GlobalNamespace::PlayerItemManager* newPlayerItemManager);

  static inline ::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2aa6cdc, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Item__OnItemSwitchedOwnershipDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Item__OnItemSwitchedOwnershipDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Item__OnItemSwitchedOwnershipDelegate(__Item__OnItemSwitchedOwnershipDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Item__OnItemSwitchedOwnershipDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Item__OnItemSwitchedOwnershipDelegate(__Item__OnItemSwitchedOwnershipDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnItemAnchorStateUpdatedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Item::OnItemAnchorStateUpdatedDelegate*
class CORDL_TYPE __Item__OnItemAnchorStateUpdatedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2aa6f98, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Item* item, ::GlobalNamespace::__Item__AnchorState oldAnchorState, ::GlobalNamespace::__Item__AnchorState newAnchorState,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2aa7040, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2aa6f84, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Item* item, ::GlobalNamespace::__Item__AnchorState oldAnchorState, ::GlobalNamespace::__Item__AnchorState newAnchorState);

  static inline ::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2aa6e54, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Item__OnItemAnchorStateUpdatedDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Item__OnItemAnchorStateUpdatedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Item__OnItemAnchorStateUpdatedDelegate(__Item__OnItemAnchorStateUpdatedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Item__OnItemAnchorStateUpdatedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Item__OnItemAnchorStateUpdatedDelegate(__Item__OnItemAnchorStateUpdatedDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<SetVelocityOnDelay>d__97
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Item::<SetVelocityOnDelay>d__97*
class CORDL_TYPE __Item___SetVelocityOnDelay_d__97 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::Item> __4__this;

  /// @brief Field delay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delay, put = __cordl_internal_set_delay)) float_t delay;

  /// @brief Field velocity, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_velocity, put = __cordl_internal_set_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2aa7050, size 0x100, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__Item___SetVelocityOnDelay_d__97* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2aa7150, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2aa7158, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2aa7198, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2aa704c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::Item> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::Item>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delay() const;

  constexpr float_t& __cordl_internal_get_delay();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::Item> value);

  constexpr void __cordl_internal_set_delay(float_t value);

  constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2aa4808, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Item___SetVelocityOnDelay_d__97();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Item___SetVelocityOnDelay_d__97", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Item___SetVelocityOnDelay_d__97(__Item___SetVelocityOnDelay_d__97&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Item___SetVelocityOnDelay_d__97", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Item___SetVelocityOnDelay_d__97(__Item___SetVelocityOnDelay_d__97 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delay, offset: 0x20, size: 0x4, def value: None
  float_t ___delay;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Item> _____4__this;

  /// @brief Field velocity, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___velocity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Item___SetVelocityOnDelay_d__97, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___SetVelocityOnDelay_d__97, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___SetVelocityOnDelay_d__97, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___SetVelocityOnDelay_d__97, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___SetVelocityOnDelay_d__97, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___SetVelocityOnDelay_d__97, ___velocity) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LerpScale>d__135
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Item::<LerpScale>d__135*
class CORDL_TYPE __Item___LerpScale_d__135 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::Item> __4__this;

  /// @brief Field <p>5__3, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <startScale>5__2, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__startScale_5__2, put = __cordl_internal_set__startScale_5__2)) float_t _startScale_5__2;

  /// @brief Field targetScale, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_targetScale, put = __cordl_internal_set_targetScale)) float_t targetScale;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2aa71a4, size 0x190, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__Item___LerpScale_d__135* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2aa7334, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2aa733c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2aa737c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2aa71a0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::Item> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::Item>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr float_t const& __cordl_internal_get__startScale_5__2() const;

  constexpr float_t& __cordl_internal_get__startScale_5__2();

  constexpr float_t const& __cordl_internal_get_targetScale() const;

  constexpr float_t& __cordl_internal_get_targetScale();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::Item> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__startScale_5__2(float_t value);

  constexpr void __cordl_internal_set_targetScale(float_t value);

  /// @brief Method .ctor, addr 0x2aa61c0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Item___LerpScale_d__135();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Item___LerpScale_d__135", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Item___LerpScale_d__135(__Item___LerpScale_d__135&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Item___LerpScale_d__135", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Item___LerpScale_d__135(__Item___LerpScale_d__135 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Item> _____4__this;

  /// @brief Field targetScale, offset: 0x28, size: 0x4, def value: None
  float_t ___targetScale;

  /// @brief Field <startScale>5__2, offset: 0x2c, size: 0x4, def value: None
  float_t ____startScale_5__2;

  /// @brief Field <p>5__3, offset: 0x30, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Item___LerpScale_d__135, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___LerpScale_d__135, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___LerpScale_d__135, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___LerpScale_d__135, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___LerpScale_d__135, ___targetScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___LerpScale_d__135, ____startScale_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Item___LerpScale_d__135, ____p_5__3) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Item
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Item*
class CORDL_TYPE Item : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnchorState = ::GlobalNamespace::__Item__AnchorState;

  using CustomParameters = ::GlobalNamespace::__Item__CustomParameters;

  using OnItemAnchorStateUpdatedDelegate = ::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate;

  using OnItemDestroyedDelegate = ::GlobalNamespace::__Item__OnItemDestroyedDelegate;

  using OnItemSwitchedOwnershipDelegate = ::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate;

  using Type = ::GlobalNamespace::__Item__Type;

  using _LerpScale_d__135 = ::GlobalNamespace::__Item___LerpScale_d__135;

  using _SetVelocityOnDelay_d__97 = ::GlobalNamespace::__Item___SetVelocityOnDelay_d__97;

  /// @brief Field <anchorState>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__anchorState_k__BackingField,
                      put = __cordl_internal_set__anchorState_k__BackingField))::GlobalNamespace::__Item__AnchorState _anchorState_k__BackingField;

  /// @brief Field <customParameters>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__customParameters_k__BackingField,
                      put = __cordl_internal_set__customParameters_k__BackingField))::GlobalNamespace::__Item__CustomParameters* _customParameters_k__BackingField;

  /// @brief Field <itemID>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__itemID_k__BackingField, put = __cordl_internal_set__itemID_k__BackingField))::StringW _itemID_k__BackingField;

  /// @brief Field <itemInteractable>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__itemInteractable_k__BackingField,
                      put = __cordl_internal_set__itemInteractable_k__BackingField))::UnityW<::GlobalNamespace::XRItemInteractable> _itemInteractable_k__BackingField;

  /// @brief Field <itemKey>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__itemKey_k__BackingField, put = __cordl_internal_set__itemKey_k__BackingField))::StringW _itemKey_k__BackingField;

  /// @brief Field <itemType>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__itemType_k__BackingField, put = __cordl_internal_set__itemType_k__BackingField))::GlobalNamespace::__Item__Type _itemType_k__BackingField;

  /// @brief Field <rb>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__rb_k__BackingField, put = __cordl_internal_set__rb_k__BackingField))::UnityW<::UnityEngine::Rigidbody> _rb_k__BackingField;

  /// @brief Field <wasHeldByRightHand>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__wasHeldByRightHand_k__BackingField, put = __cordl_internal_set__wasHeldByRightHand_k__BackingField)) bool _wasHeldByRightHand_k__BackingField;

  /// @brief Field anchorID, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_anchorID, put = __cordl_internal_set_anchorID))::StringW anchorID;

  __declspec(property(get = get_anchorState, put = set_anchorState))::GlobalNamespace::__Item__AnchorState anchorState;

  __declspec(property(get = get_controllingUserID))::StringW controllingUserID;

  /// @brief Field curLerpScaleCoroutine, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_curLerpScaleCoroutine, put = __cordl_internal_set_curLerpScaleCoroutine))::UnityEngine::Coroutine* curLerpScaleCoroutine;

  /// @brief Field curVisualLayer, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_curVisualLayer, put = __cordl_internal_set_curVisualLayer)) int32_t curVisualLayer;

  __declspec(property(get = get_customParameters, put = set_customParameters))::GlobalNamespace::__Item__CustomParameters* customParameters;

  /// @brief Field despawnSoundKey, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_despawnSoundKey, put = __cordl_internal_set_despawnSoundKey))::StringW despawnSoundKey;

  /// @brief Field flipScaleContainerInLeftHand, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_flipScaleContainerInLeftHand, put = __cordl_internal_set_flipScaleContainerInLeftHand)) bool flipScaleContainerInLeftHand;

  /// @brief Field gripType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_gripType, put = __cordl_internal_set_gripType))::GlobalNamespace::__AvatarHand__GripType gripType;

  /// @brief Field ignoreCollisionSounds, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreCollisionSounds, put = __cordl_internal_set_ignoreCollisionSounds)) bool ignoreCollisionSounds;

  /// @brief Field ignoreThrowSound, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreThrowSound, put = __cordl_internal_set_ignoreThrowSound)) bool ignoreThrowSound;

  /// @brief Field initialGrabSoundKey, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_initialGrabSoundKey, put = __cordl_internal_set_initialGrabSoundKey))::StringW initialGrabSoundKey;

  __declspec(property(get = get_isMaster)) bool isMaster;

  __declspec(property(get = get_isOverlappingDespawnZone)) bool isOverlappingDespawnZone;

  /// @brief Field isThrowSoundQueued, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get_isThrowSoundQueued, put = __cordl_internal_set_isThrowSoundQueued)) bool isThrowSoundQueued;

  __declspec(property(get = get_itemID, put = set_itemID))::StringW itemID;

  __declspec(property(get = get_itemInteractable, put = set_itemInteractable))::UnityW<::GlobalNamespace::XRItemInteractable> itemInteractable;

  __declspec(property(get = get_itemKey, put = set_itemKey))::StringW itemKey;

  __declspec(property(get = get_itemType, put = set_itemType))::GlobalNamespace::__Item__Type itemType;

  /// @brief Field lastPlayedSoundTime, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_lastPlayedSoundTime, put = __cordl_internal_set_lastPlayedSoundTime)) float_t lastPlayedSoundTime;

  /// @brief Field onItemAnchorStateUpdatedCallbacks, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_onItemAnchorStateUpdatedCallbacks,
                      put = __cordl_internal_set_onItemAnchorStateUpdatedCallbacks))::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate* onItemAnchorStateUpdatedCallbacks;

  /// @brief Field onItemDestroyedCallbacks, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_onItemDestroyedCallbacks,
                      put = __cordl_internal_set_onItemDestroyedCallbacks))::GlobalNamespace::__Item__OnItemDestroyedDelegate* onItemDestroyedCallbacks;

  /// @brief Field onItemSwitchedOwnershipCallbacks, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_onItemSwitchedOwnershipCallbacks,
                      put = __cordl_internal_set_onItemSwitchedOwnershipCallbacks))::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate* onItemSwitchedOwnershipCallbacks;

  /// @brief Field overlappingDespawnZone, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_overlappingDespawnZone, put = __cordl_internal_set_overlappingDespawnZone))::UnityW<::GlobalNamespace::ItemDespawnZone> overlappingDespawnZone;

  /// @brief Field playerItemManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_playerItemManager, put = __cordl_internal_set_playerItemManager))::GlobalNamespace::PlayerItemManager* playerItemManager;

  /// @brief Field queueFrameClock, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_queueFrameClock, put = __cordl_internal_set_queueFrameClock)) int32_t queueFrameClock;

  __declspec(property(get = get_rb, put = set_rb))::UnityW<::UnityEngine::Rigidbody> rb;

  /// @brief Field registeredAvatar, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredAvatar, put = __cordl_internal_set_registeredAvatar))::UnityW<::GlobalNamespace::Avatar> registeredAvatar;

  /// @brief Field regrabSoundKey, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_regrabSoundKey, put = __cordl_internal_set_regrabSoundKey))::StringW regrabSoundKey;

  /// @brief Field scaleContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleContainer, put = __cordl_internal_set_scaleContainer))::UnityW<::UnityEngine::Transform> scaleContainer;

  /// @brief Field sendTransformationQueued, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_sendTransformationQueued, put = __cordl_internal_set_sendTransformationQueued)) bool sendTransformationQueued;

  /// @brief Field shouldPlayInitialGrabSound, offset 0xa3, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldPlayInitialGrabSound, put = __cordl_internal_set_shouldPlayInitialGrabSound)) bool shouldPlayInitialGrabSound;

  /// @brief Field visualContainers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_visualContainers,
                      put = __cordl_internal_set_visualContainers))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> visualContainers;

  __declspec(property(get = get_wasHeldByRightHand, put = set_wasHeldByRightHand)) bool wasHeldByRightHand;

  /// @brief Method ApplyVisualLayer, addr 0x2aa3608, size 0x14, virtual false, abstract: false, final false
  inline void ApplyVisualLayer(::UnityEngine::GameObject* container);

  /// @brief Method CalculateThrowVelocity, addr 0x2aa3850, size 0x300, virtual true, abstract: false, final false
  inline void CalculateThrowVelocity(ByRef<::UnityEngine::Vector3> velocity, ByRef<::UnityEngine::Vector3> angularVelocity);

  /// @brief Method CanTransferOwnership, addr 0x2aa3600, size 0x8, virtual true, abstract: false, final false
  inline bool CanTransferOwnership();

  /// @brief Method DestroySelf, addr 0x2a9f4e4, size 0x1f0, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method DisableDespawning, addr 0x2aa449c, size 0x4, virtual true, abstract: false, final false
  inline void DisableDespawning();

  /// @brief Method DoHandHaptic, addr 0x2aa5d64, size 0xb4, virtual false, abstract: false, final false
  inline void DoHandHaptic(float_t amplitude, float_t duration);

  /// @brief Method DoManualThrow, addr 0x2aa4668, size 0x10c, virtual false, abstract: false, final false
  inline void DoManualThrow(::UnityEngine::Vector3 velocity);

  /// @brief Method ExpressTransformationData, addr 0x2aa51f0, size 0x3c4, virtual false, abstract: false, final false
  inline void ExpressTransformationData(::GlobalNamespace::ItemTransformationData transformationData);

  /// @brief Method ExtractTransformationData, addr 0x2aa48d0, size 0x2d0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ItemTransformationData ExtractTransformationData();

  /// @brief Method FixedUpdate, addr 0x2aa4fd4, size 0x10, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetAggregateContacts, addr 0x2aa61e8, size 0x2b4, virtual false, abstract: false, final false
  static inline void GetAggregateContacts(::UnityEngine::Collision* collision, ByRef<::UnityEngine::Vector3> avgPosition, ByRef<::UnityEngine::Vector3> avgNormal);

  /// @brief Method GetAggregateNormal, addr 0x2aa0a80, size 0x1cc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetAggregateNormal(::UnityEngine::Collision* collision);

  /// @brief Method GetBounds, addr 0x2aa363c, size 0x40, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method GetFlipLocalCenter, addr 0x2aa5d10, size 0x44, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetFlipLocalCenter();

  /// @brief Method Initialize, addr 0x2a9d8f0, size 0x124, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method IsAnchoredToMasterPlayer, addr 0x2aa0260, size 0x54, virtual false, abstract: false, final false
  inline bool IsAnchoredToMasterPlayer();

  /// @brief Method IsAnchoredToUser, addr 0x2aa35f4, size 0xc, virtual false, abstract: false, final false
  inline bool IsAnchoredToUser(::StringW userID);

  /// @brief Method LerpScale, addr 0x2aa6148, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* LerpScale(float_t targetScale);

  /// @brief Method MakeSelectedByMasterHand, addr 0x2aa4508, size 0x160, virtual false, abstract: false, final false
  inline void MakeSelectedByMasterHand(bool right);

  /// @brief Method MakeVisualOnly, addr 0x2aa367c, size 0x1ac, virtual true, abstract: false, final false
  inline void MakeVisualOnly(::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::Item* New_ctor();

  /// @brief Method OnActivate, addr 0x2aa5d5c, size 0x4, virtual true, abstract: false, final false
  inline void OnActivate();

  /// @brief Method OnAnchorStateUpdated, addr 0x2aa35f0, size 0x4, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnCollisionEnter, addr 0x2aa4fe4, size 0x208, virtual false, abstract: false, final false
  inline void OnCollisionEnter(::UnityEngine::Collision* collision);

  /// @brief Method OnDeactivate, addr 0x2aa5d60, size 0x4, virtual true, abstract: false, final false
  inline void OnDeactivate();

  /// @brief Method OnDespawned, addr 0x2aa137c, size 0x4, virtual true, abstract: false, final false
  inline void OnDespawned();

  /// @brief Method OnFirstHoverEnter, addr 0x2aa5d54, size 0x4, virtual false, abstract: false, final false
  inline void OnFirstHoverEnter();

  /// @brief Method OnFixedUpdate, addr 0x2a9e344, size 0x4, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnHoveringToDespawnEnter, addr 0x2aa5e18, size 0xc4, virtual true, abstract: false, final false
  inline void OnHoveringToDespawnEnter();

  /// @brief Method OnHoveringToDespawnExit, addr 0x2aa6004, size 0x38, virtual true, abstract: false, final false
  inline void OnHoveringToDespawnExit();

  /// @brief Method OnIsMasterUpdated, addr 0x2a9da40, size 0x4, virtual true, abstract: false, final false
  inline void OnIsMasterUpdated();

  /// @brief Method OnLastHoverExit, addr 0x2aa5d58, size 0x4, virtual false, abstract: false, final false
  inline void OnLastHoverExit();

  /// @brief Method OnMasterCollisionEnter, addr 0x2aa51ec, size 0x4, virtual true, abstract: false, final false
  inline void OnMasterCollisionEnter(::UnityEngine::Collision* collision);

  /// @brief Method OnOwnershipTransfered, addr 0x2aa41d0, size 0x2cc, virtual false, abstract: false, final false
  inline void OnOwnershipTransfered(::GlobalNamespace::PlayerItemManager* newPlayerItemManager);

  /// @brief Method OnPlayerItemManagedSwitchedUserIDs, addr 0x2aa3f94, size 0x30, virtual false, abstract: false, final false
  inline void OnPlayerItemManagedSwitchedUserIDs(::StringW oldUserID, ::StringW newUserID);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x2aa6144, size 0x4, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(::StringW payload);

  /// @brief Method OnSelectEntered, addr 0x2aa55b4, size 0x2c4, virtual false, abstract: false, final false
  inline void OnSelectEntered();

  /// @brief Method OnSelectExited, addr 0x2aa5878, size 0x380, virtual false, abstract: false, final false
  inline void OnSelectExited();

  /// @brief Method OnUpdate, addr 0x2aa4fd0, size 0x4, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method PlayThrowSound, addr 0x2aa4cc0, size 0x11c, virtual false, abstract: false, final false
  inline void PlayThrowSound(::UnityEngine::Vector3 velocity);

  /// @brief Method QueueInitialGrabSound, addr 0x2aa2d30, size 0xc, virtual false, abstract: false, final false
  inline void QueueInitialGrabSound();

  /// @brief Method QueueSendCurrentTransformation, addr 0x2aa4830, size 0x14, virtual false, abstract: false, final false
  inline void QueueSendCurrentTransformation();

  /// @brief Method RefundToMasterPlayer, addr 0x2aa3e68, size 0x12c, virtual false, abstract: false, final false
  inline bool RefundToMasterPlayer();

  /// @brief Method RevertInteractableToDefault, addr 0x2aa44a0, size 0x68, virtual true, abstract: false, final false
  inline void RevertInteractableToDefault();

  /// @brief Method SendCurrentTransformation, addr 0x2aa4844, size 0x8c, virtual false, abstract: false, final false
  inline void SendCurrentTransformation();

  /// @brief Method SendDestroySelf, addr 0x2a9d754, size 0x20, virtual false, abstract: false, final false
  inline bool SendDestroySelf();

  /// @brief Method SendSimpleCustomMessage, addr 0x2a9da8c, size 0x48, virtual false, abstract: false, final false
  inline void SendSimpleCustomMessage(::StringW payload);

  /// @brief Method SendTransferOwnershipToMaster, addr 0x2aa3fc4, size 0x5c, virtual false, abstract: false, final false
  inline void SendTransferOwnershipToMaster();

  /// @brief Method SetAnchorState, addr 0x2aa2d3c, size 0x708, virtual false, abstract: false, final false
  inline void SetAnchorState(::GlobalNamespace::__Item__AnchorState newAnchorState, ::StringW newAnchorID);

  /// @brief Method SetAndSendTransformantion, addr 0x2a9e384, size 0x38, virtual false, abstract: false, final false
  inline void SetAndSendTransformantion(::GlobalNamespace::ItemTransformationData transformationData);

  /// @brief Method SetIsInteractable, addr 0x2a9df20, size 0x28, virtual true, abstract: false, final false
  inline void SetIsInteractable(bool newIsInteractable);

  /// @brief Method SetOverlappingDespawnZone, addr 0x2aa3444, size 0x13c, virtual false, abstract: false, final false
  inline void SetOverlappingDespawnZone(::GlobalNamespace::ItemDespawnZone* newOverlappingDespawnZone);

  /// @brief Method SetVelocityOnDelay, addr 0x2aa4774, size 0x94, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SetVelocityOnDelay(float_t delay, ::UnityEngine::Vector3 velocity);

  /// @brief Method SetVisualLayer, addr 0x2aa3580, size 0x70, virtual false, abstract: false, final false
  inline void SetVisualLayer(int32_t visualLayer);

  /// @brief Method ShouldShrinkWhenOverDespawnZone, addr 0x2aa603c, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldShrinkWhenOverDespawnZone();

  /// @brief Method TransitionScale, addr 0x2aa5edc, size 0x128, virtual false, abstract: false, final false
  inline void TransitionScale(float_t newScale, bool instant);

  /// @brief Method TryCancelActiveSelections, addr 0x2aa3c38, size 0x230, virtual false, abstract: false, final false
  inline void TryCancelActiveSelections();

  /// @brief Method Update, addr 0x2aa4ddc, size 0xe0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__Item__AnchorState const& __cordl_internal_get__anchorState_k__BackingField() const;

  constexpr ::GlobalNamespace::__Item__AnchorState& __cordl_internal_get__anchorState_k__BackingField();

  constexpr ::GlobalNamespace::__Item__CustomParameters*& __cordl_internal_get__customParameters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Item__CustomParameters*> const& __cordl_internal_get__customParameters_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__itemID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__itemID_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::XRItemInteractable> const& __cordl_internal_get__itemInteractable_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::XRItemInteractable>& __cordl_internal_get__itemInteractable_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__itemKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__itemKey_k__BackingField();

  constexpr ::GlobalNamespace::__Item__Type const& __cordl_internal_get__itemType_k__BackingField() const;

  constexpr ::GlobalNamespace::__Item__Type& __cordl_internal_get__itemType_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rb_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rb_k__BackingField();

  constexpr bool const& __cordl_internal_get__wasHeldByRightHand_k__BackingField() const;

  constexpr bool& __cordl_internal_get__wasHeldByRightHand_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_anchorID() const;

  constexpr ::StringW& __cordl_internal_get_anchorID();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curLerpScaleCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curLerpScaleCoroutine() const;

  constexpr int32_t const& __cordl_internal_get_curVisualLayer() const;

  constexpr int32_t& __cordl_internal_get_curVisualLayer();

  constexpr ::StringW const& __cordl_internal_get_despawnSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_despawnSoundKey();

  constexpr bool const& __cordl_internal_get_flipScaleContainerInLeftHand() const;

  constexpr bool& __cordl_internal_get_flipScaleContainerInLeftHand();

  constexpr ::GlobalNamespace::__AvatarHand__GripType const& __cordl_internal_get_gripType() const;

  constexpr ::GlobalNamespace::__AvatarHand__GripType& __cordl_internal_get_gripType();

  constexpr bool const& __cordl_internal_get_ignoreCollisionSounds() const;

  constexpr bool& __cordl_internal_get_ignoreCollisionSounds();

  constexpr bool const& __cordl_internal_get_ignoreThrowSound() const;

  constexpr bool& __cordl_internal_get_ignoreThrowSound();

  constexpr ::StringW const& __cordl_internal_get_initialGrabSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_initialGrabSoundKey();

  constexpr bool const& __cordl_internal_get_isThrowSoundQueued() const;

  constexpr bool& __cordl_internal_get_isThrowSoundQueued();

  constexpr float_t const& __cordl_internal_get_lastPlayedSoundTime() const;

  constexpr float_t& __cordl_internal_get_lastPlayedSoundTime();

  constexpr ::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate*& __cordl_internal_get_onItemAnchorStateUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate*> const& __cordl_internal_get_onItemAnchorStateUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__Item__OnItemDestroyedDelegate*& __cordl_internal_get_onItemDestroyedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Item__OnItemDestroyedDelegate*> const& __cordl_internal_get_onItemDestroyedCallbacks() const;

  constexpr ::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate*& __cordl_internal_get_onItemSwitchedOwnershipCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate*> const& __cordl_internal_get_onItemSwitchedOwnershipCallbacks() const;

  constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone> const& __cordl_internal_get_overlappingDespawnZone() const;

  constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone>& __cordl_internal_get_overlappingDespawnZone();

  constexpr ::GlobalNamespace::PlayerItemManager*& __cordl_internal_get_playerItemManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerItemManager*> const& __cordl_internal_get_playerItemManager() const;

  constexpr int32_t const& __cordl_internal_get_queueFrameClock() const;

  constexpr int32_t& __cordl_internal_get_queueFrameClock();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_registeredAvatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_registeredAvatar();

  constexpr ::StringW const& __cordl_internal_get_regrabSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_regrabSoundKey();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scaleContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scaleContainer();

  constexpr bool const& __cordl_internal_get_sendTransformationQueued() const;

  constexpr bool& __cordl_internal_get_sendTransformationQueued();

  constexpr bool const& __cordl_internal_get_shouldPlayInitialGrabSound() const;

  constexpr bool& __cordl_internal_get_shouldPlayInitialGrabSound();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_visualContainers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_visualContainers();

  constexpr void __cordl_internal_set__anchorState_k__BackingField(::GlobalNamespace::__Item__AnchorState value);

  constexpr void __cordl_internal_set__customParameters_k__BackingField(::GlobalNamespace::__Item__CustomParameters* value);

  constexpr void __cordl_internal_set__itemID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__itemInteractable_k__BackingField(::UnityW<::GlobalNamespace::XRItemInteractable> value);

  constexpr void __cordl_internal_set__itemKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__itemType_k__BackingField(::GlobalNamespace::__Item__Type value);

  constexpr void __cordl_internal_set__rb_k__BackingField(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set__wasHeldByRightHand_k__BackingField(bool value);

  constexpr void __cordl_internal_set_anchorID(::StringW value);

  constexpr void __cordl_internal_set_curLerpScaleCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curVisualLayer(int32_t value);

  constexpr void __cordl_internal_set_despawnSoundKey(::StringW value);

  constexpr void __cordl_internal_set_flipScaleContainerInLeftHand(bool value);

  constexpr void __cordl_internal_set_gripType(::GlobalNamespace::__AvatarHand__GripType value);

  constexpr void __cordl_internal_set_ignoreCollisionSounds(bool value);

  constexpr void __cordl_internal_set_ignoreThrowSound(bool value);

  constexpr void __cordl_internal_set_initialGrabSoundKey(::StringW value);

  constexpr void __cordl_internal_set_isThrowSoundQueued(bool value);

  constexpr void __cordl_internal_set_lastPlayedSoundTime(float_t value);

  constexpr void __cordl_internal_set_onItemAnchorStateUpdatedCallbacks(::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate* value);

  constexpr void __cordl_internal_set_onItemDestroyedCallbacks(::GlobalNamespace::__Item__OnItemDestroyedDelegate* value);

  constexpr void __cordl_internal_set_onItemSwitchedOwnershipCallbacks(::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate* value);

  constexpr void __cordl_internal_set_overlappingDespawnZone(::UnityW<::GlobalNamespace::ItemDespawnZone> value);

  constexpr void __cordl_internal_set_playerItemManager(::GlobalNamespace::PlayerItemManager* value);

  constexpr void __cordl_internal_set_queueFrameClock(int32_t value);

  constexpr void __cordl_internal_set_registeredAvatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_regrabSoundKey(::StringW value);

  constexpr void __cordl_internal_set_scaleContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_sendTransformationQueued(bool value);

  constexpr void __cordl_internal_set_shouldPlayInitialGrabSound(bool value);

  constexpr void __cordl_internal_set_visualContainers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  /// @brief Method .ctor, addr 0x2a9d78c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchorState, addr 0x2aa2cac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Item__AnchorState get_anchorState();

  /// @brief Method get_controllingUserID, addr 0x2a9ebd4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_controllingUserID();

  /// @brief Method get_customParameters, addr 0x2aa2c9c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Item__CustomParameters* get_customParameters();

  /// @brief Method get_isMaster, addr 0x2a9d738, size 0x1c, virtual false, abstract: false, final false
  inline bool get_isMaster();

  /// @brief Method get_isOverlappingDespawnZone, addr 0x2aa2cd0, size 0x60, virtual false, abstract: false, final false
  inline bool get_isOverlappingDespawnZone();

  /// @brief Method get_itemID, addr 0x2aa2c6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_itemID();

  /// @brief Method get_itemInteractable, addr 0x2aa362c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::XRItemInteractable> get_itemInteractable();

  /// @brief Method get_itemKey, addr 0x2aa2c7c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_itemKey();

  /// @brief Method get_itemType, addr 0x2aa2c8c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Item__Type get_itemType();

  /// @brief Method get_rb, addr 0x2aa361c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_rb();

  /// @brief Method get_wasHeldByRightHand, addr 0x2aa2cbc, size 0x8, virtual false, abstract: false, final false
  inline bool get_wasHeldByRightHand();

  /// @brief Method set_anchorState, addr 0x2aa2cb4, size 0x8, virtual false, abstract: false, final false
  inline void set_anchorState(::GlobalNamespace::__Item__AnchorState value);

  /// @brief Method set_customParameters, addr 0x2aa2ca4, size 0x8, virtual false, abstract: false, final false
  inline void set_customParameters(::GlobalNamespace::__Item__CustomParameters* value);

  /// @brief Method set_itemID, addr 0x2aa2c74, size 0x8, virtual false, abstract: false, final false
  inline void set_itemID(::StringW value);

  /// @brief Method set_itemInteractable, addr 0x2aa3634, size 0x8, virtual false, abstract: false, final false
  inline void set_itemInteractable(::GlobalNamespace::XRItemInteractable* value);

  /// @brief Method set_itemKey, addr 0x2aa2c84, size 0x8, virtual false, abstract: false, final false
  inline void set_itemKey(::StringW value);

  /// @brief Method set_itemType, addr 0x2aa2c94, size 0x8, virtual false, abstract: false, final false
  inline void set_itemType(::GlobalNamespace::__Item__Type value);

  /// @brief Method set_rb, addr 0x2aa3624, size 0x8, virtual false, abstract: false, final false
  inline void set_rb(::UnityEngine::Rigidbody* value);

  /// @brief Method set_wasHeldByRightHand, addr 0x2aa2cc4, size 0xc, virtual false, abstract: false, final false
  inline void set_wasHeldByRightHand(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Item();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Item", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Item(Item&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Item", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Item(Item const&) = delete;

  /// @brief Field scaleContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___scaleContainer;

  /// @brief Field flipScaleContainerInLeftHand, offset: 0x20, size: 0x1, def value: None
  bool ___flipScaleContainerInLeftHand;

  /// @brief Field visualContainers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___visualContainers;

  /// @brief Field gripType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__AvatarHand__GripType ___gripType;

  /// @brief Field <itemID>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____itemID_k__BackingField;

  /// @brief Field playerItemManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PlayerItemManager* ___playerItemManager;

  /// @brief Field <itemKey>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____itemKey_k__BackingField;

  /// @brief Field <itemType>k__BackingField, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::__Item__Type ____itemType_k__BackingField;

  /// @brief Field <customParameters>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__Item__CustomParameters* ____customParameters_k__BackingField;

  /// @brief Field <anchorState>k__BackingField, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::__Item__AnchorState ____anchorState_k__BackingField;

  /// @brief Field anchorID, offset: 0x68, size: 0x8, def value: None
  ::StringW ___anchorID;

  /// @brief Field <wasHeldByRightHand>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____wasHeldByRightHand_k__BackingField;

  /// @brief Field curVisualLayer, offset: 0x74, size: 0x4, def value: None
  int32_t ___curVisualLayer;

  /// @brief Field registeredAvatar, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___registeredAvatar;

  /// @brief Field overlappingDespawnZone, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ItemDespawnZone> ___overlappingDespawnZone;

  /// @brief Field initialGrabSoundKey, offset: 0x88, size: 0x8, def value: None
  ::StringW ___initialGrabSoundKey;

  /// @brief Field regrabSoundKey, offset: 0x90, size: 0x8, def value: None
  ::StringW ___regrabSoundKey;

  /// @brief Field despawnSoundKey, offset: 0x98, size: 0x8, def value: None
  ::StringW ___despawnSoundKey;

  /// @brief Field ignoreThrowSound, offset: 0xa0, size: 0x1, def value: None
  bool ___ignoreThrowSound;

  /// @brief Field ignoreCollisionSounds, offset: 0xa1, size: 0x1, def value: None
  bool ___ignoreCollisionSounds;

  /// @brief Field isThrowSoundQueued, offset: 0xa2, size: 0x1, def value: None
  bool ___isThrowSoundQueued;

  /// @brief Field shouldPlayInitialGrabSound, offset: 0xa3, size: 0x1, def value: None
  bool ___shouldPlayInitialGrabSound;

  /// @brief Field <rb>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ____rb_k__BackingField;

  /// @brief Field <itemInteractable>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::XRItemInteractable> ____itemInteractable_k__BackingField;

  /// @brief Field sendTransformationQueued, offset: 0xb8, size: 0x1, def value: None
  bool ___sendTransformationQueued;

  /// @brief Field queueFrameClock, offset: 0xbc, size: 0x4, def value: None
  int32_t ___queueFrameClock;

  /// @brief Field onItemDestroyedCallbacks, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::__Item__OnItemDestroyedDelegate* ___onItemDestroyedCallbacks;

  /// @brief Field onItemSwitchedOwnershipCallbacks, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate* ___onItemSwitchedOwnershipCallbacks;

  /// @brief Field onItemAnchorStateUpdatedCallbacks, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate* ___onItemAnchorStateUpdatedCallbacks;

  /// @brief Field lastPlayedSoundTime, offset: 0xd8, size: 0x4, def value: None
  float_t ___lastPlayedSoundTime;

  /// @brief Field curLerpScaleCoroutine, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curLerpScaleCoroutine;

  /// @brief Field DEFAULT_DESPAWN_PUPPET_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_DESPAWN_PUPPET_SOUND_KEY{ u"itemDespawnPuppet" };

  /// @brief Field DEFAULT_DESPAWN_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_DESPAWN_SOUND_KEY{ u"itemDespawn" };

  /// @brief Field DEFAULT_INITIAL_GRAB_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_INITIAL_GRAB_SOUND_KEY{ u"itemGrabFull" };

  /// @brief Field DEFAULT_REGRAB_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEFAULT_REGRAB_SOUND_KEY{ u"itemGrabFull" };

  /// @brief Field GENERIC_COLLISION_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString GENERIC_COLLISION_SOUND_KEY{ u"itemCollision" };

  /// @brief Field SOUND_COOLDOWN_TIME offset 0xffffffff size 0x4
  static constexpr float_t SOUND_COOLDOWN_TIME{ 0.2 };

  /// @brief Field THROW_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString THROW_KEY{ u"itemThrow" };

  /// @brief Field THROW_VELOCITY_THRESHOLD offset 0xffffffff size 0x4
  static constexpr float_t THROW_VELOCITY_THRESHOLD{ 3.0 };

  /// @brief Field VELOCITY_FOR_MAX_SOUND offset 0xffffffff size 0x4
  static constexpr float_t VELOCITY_FOR_MAX_SOUND{ 4.0 };

  /// @brief Field VELOCITY_SOUND_TRIGGER_THRESHOLD offset 0xffffffff size 0x4
  static constexpr float_t VELOCITY_SOUND_TRIGGER_THRESHOLD{ 0.5 };

  /// @brief Field VELOCITY_SOUND_TRIGGER_THRESHOLD_SQR offset 0xffffffff size 0x4
  static constexpr float_t VELOCITY_SOUND_TRIGGER_THRESHOLD_SQR{ 0.25 };

  /// @brief Field hoveringToDespawnScale offset 0xffffffff size 0x4
  static constexpr float_t hoveringToDespawnScale{ 0.45 };

  /// @brief Field itemLayer offset 0xffffffff size 0x4
  static constexpr int32_t itemLayer{ static_cast<int32_t>(0x7) };

  /// @brief Field scaleTransitionDuration offset 0xffffffff size 0x4
  static constexpr float_t scaleTransitionDuration{ 0.125 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Item, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___scaleContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___flipScaleContainerInLeftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___visualContainers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___gripType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ____itemID_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___playerItemManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ____itemKey_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ____itemType_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ____customParameters_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ____anchorState_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___anchorID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ____wasHeldByRightHand_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___curVisualLayer) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___registeredAvatar) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___overlappingDespawnZone) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___initialGrabSoundKey) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___regrabSoundKey) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___despawnSoundKey) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___ignoreThrowSound) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___ignoreCollisionSounds) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___isThrowSoundQueued) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___shouldPlayInitialGrabSound) == 0xa3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ____rb_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ____itemInteractable_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___sendTransformationQueued) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___queueFrameClock) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___onItemDestroyedCallbacks) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___onItemSwitchedOwnershipCallbacks) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___onItemAnchorStateUpdatedCallbacks) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___lastPlayedSoundTime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Item, ___curLerpScaleCoroutine) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Item__AnchorState, "", "Item/AnchorState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Item__Type, "", "Item/Type");
NEED_NO_BOX(::GlobalNamespace::Item);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Item*, "", "Item");
NEED_NO_BOX(::GlobalNamespace::__Item__CustomParameters);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Item__CustomParameters*, "", "Item/CustomParameters");
NEED_NO_BOX(::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Item__OnItemAnchorStateUpdatedDelegate*, "", "Item/OnItemAnchorStateUpdatedDelegate");
NEED_NO_BOX(::GlobalNamespace::__Item__OnItemDestroyedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Item__OnItemDestroyedDelegate*, "", "Item/OnItemDestroyedDelegate");
NEED_NO_BOX(::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Item__OnItemSwitchedOwnershipDelegate*, "", "Item/OnItemSwitchedOwnershipDelegate");
NEED_NO_BOX(::GlobalNamespace::__Item___LerpScale_d__135);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Item___LerpScale_d__135*, "", "Item/<LerpScale>d__135");
NEED_NO_BOX(::GlobalNamespace::__Item___SetVelocityOnDelay_d__97);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Item___SetVelocityOnDelay_d__97*, "", "Item/<SetVelocityOnDelay>d__97");
