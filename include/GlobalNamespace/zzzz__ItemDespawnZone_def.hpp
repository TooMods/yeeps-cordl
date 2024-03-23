#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ItemDespawnZone)
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class __ItemDespawnZone__OnItemDespawned;
}
namespace GlobalNamespace {
struct __Item__Type;
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
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ItemDespawnZone;
}
namespace GlobalNamespace {
class __ItemDespawnZone__OnItemDespawned;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ItemDespawnZone);
MARK_REF_PTR_T(::GlobalNamespace::__ItemDespawnZone__OnItemDespawned);
// Type: ::OnItemDespawned
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ItemDespawnZone::OnItemDespawned*
class CORDL_TYPE __ItemDespawnZone__OnItemDespawned : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2aa78dc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Item* item, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2aa78fc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2aa78c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Item* item);

  static inline ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2aa779c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ItemDespawnZone__OnItemDespawned();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ItemDespawnZone__OnItemDespawned", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ItemDespawnZone__OnItemDespawned(__ItemDespawnZone__OnItemDespawned&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ItemDespawnZone__OnItemDespawned", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ItemDespawnZone__OnItemDespawned(__ItemDespawnZone__OnItemDespawned const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ItemDespawnZone
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ItemDespawnZone*
class CORDL_TYPE ItemDespawnZone : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnItemDespawned = ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned;

  /// @brief Field <acceptedItemType>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__acceptedItemType_k__BackingField,
                      put = __cordl_internal_set__acceptedItemType_k__BackingField))::GlobalNamespace::__Item__Type _acceptedItemType_k__BackingField;

  __declspec(property(get = get_acceptedItemType, put = set_acceptedItemType))::GlobalNamespace::__Item__Type acceptedItemType;

  /// @brief Field isActive, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isInitialized, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isInitialized, put = __cordl_internal_set_isInitialized)) bool isInitialized;

  /// @brief Field isRegistered, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field onItemDespawnedCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onItemDespawnedCallback,
                      put = __cordl_internal_set_onItemDespawnedCallback))::GlobalNamespace::__ItemDespawnZone__OnItemDespawned* onItemDespawnedCallback;

  /// @brief Method Initialize, addr 0x2aa7394, size 0x90, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::__Item__Type acceptedItemType, ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned* onItemDespawnedCallback);

  /// @brief Method IsWithinZone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsWithinZone(::UnityEngine::Vector3 position);

  /// @brief Method ItemDespawned, addr 0x2aa5bf8, size 0x118, virtual false, abstract: false, final false
  inline void ItemDespawned(::GlobalNamespace::Item* item);

  static inline ::GlobalNamespace::ItemDespawnZone* New_ctor();

  /// @brief Method OnDisable, addr 0x2aa761c, size 0x68, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2aa75a4, size 0x78, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::GlobalNamespace::__Item__Type const& __cordl_internal_get__acceptedItemType_k__BackingField() const;

  constexpr ::GlobalNamespace::__Item__Type& __cordl_internal_get__acceptedItemType_k__BackingField();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isInitialized() const;

  constexpr bool& __cordl_internal_get_isInitialized();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*& __cordl_internal_get_onItemDespawnedCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*> const& __cordl_internal_get_onItemDespawnedCallback() const;

  constexpr void __cordl_internal_set__acceptedItemType_k__BackingField(::GlobalNamespace::__Item__Type value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isInitialized(bool value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_onItemDespawnedCallback(::GlobalNamespace::__ItemDespawnZone__OnItemDespawned* value);

  /// @brief Method .ctor, addr 0x2aa7794, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_acceptedItemType, addr 0x2aa7384, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Item__Type get_acceptedItemType();

  /// @brief Method set_acceptedItemType, addr 0x2aa738c, size 0x8, virtual false, abstract: false, final false
  inline void set_acceptedItemType(::GlobalNamespace::__Item__Type value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemDespawnZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemDespawnZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemDespawnZone(ItemDespawnZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemDespawnZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemDespawnZone(ItemDespawnZone const&) = delete;

  /// @brief Field <acceptedItemType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__Item__Type ____acceptedItemType_k__BackingField;

  /// @brief Field isActive, offset: 0x1c, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field isRegistered, offset: 0x1d, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field onItemDespawnedCallback, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__ItemDespawnZone__OnItemDespawned* ___onItemDespawnedCallback;

  /// @brief Field isInitialized, offset: 0x28, size: 0x1, def value: None
  bool ___isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ItemDespawnZone, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemDespawnZone, ____acceptedItemType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemDespawnZone, ___isActive) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemDespawnZone, ___isRegistered) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemDespawnZone, ___onItemDespawnedCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemDespawnZone, ___isInitialized) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ItemDespawnZone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ItemDespawnZone*, "", "ItemDespawnZone");
NEED_NO_BOX(::GlobalNamespace::__ItemDespawnZone__OnItemDespawned);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ItemDespawnZone__OnItemDespawned*, "", "ItemDespawnZone/OnItemDespawned");
