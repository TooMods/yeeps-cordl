#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ItemSpawner_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TestItemSpawner)
namespace GlobalNamespace {
struct ItemTransformationData;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class __TestItemSpawner__OnItemSpawnedDelegate;
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
// Forward declare root types
namespace GlobalNamespace {
class TestItemSpawner;
}
namespace GlobalNamespace {
class __TestItemSpawner__OnItemSpawnedDelegate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TestItemSpawner);
MARK_REF_PTR_T(::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate);
// Type: ::OnItemSpawnedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TestItemSpawner::OnItemSpawnedDelegate*
class CORDL_TYPE __TestItemSpawner__OnItemSpawnedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2ab226c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Item* item, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2ab228c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2ab2258, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Item* item);

  static inline ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ab212c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TestItemSpawner__OnItemSpawnedDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TestItemSpawner__OnItemSpawnedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TestItemSpawner__OnItemSpawnedDelegate(__TestItemSpawner__OnItemSpawnedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TestItemSpawner__OnItemSpawnedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TestItemSpawner__OnItemSpawnedDelegate(__TestItemSpawner__OnItemSpawnedDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TestItemSpawner
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TestItemSpawner*
class CORDL_TYPE TestItemSpawner : public ::GlobalNamespace::ItemSpawner {
public:
  // Declarations
  using OnItemSpawnedDelegate = ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate;

  /// @brief Field <lastSpawnedItem>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lastSpawnedItem_k__BackingField,
                      put = __cordl_internal_set__lastSpawnedItem_k__BackingField))::UnityW<::GlobalNamespace::Item> _lastSpawnedItem_k__BackingField;

  /// @brief Field count, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field itemKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_itemKey, put = __cordl_internal_set_itemKey))::StringW itemKey;

  __declspec(property(get = get_lastSpawnedItem, put = set_lastSpawnedItem))::UnityW<::GlobalNamespace::Item> lastSpawnedItem;

  /// @brief Field onItemSpawnedCallbacks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onItemSpawnedCallbacks,
                      put = __cordl_internal_set_onItemSpawnedCallbacks))::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate* onItemSpawnedCallbacks;

  /// @brief Field onlySpawnIfHost, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_onlySpawnIfHost, put = __cordl_internal_set_onlySpawnIfHost)) bool onlySpawnIfHost;

  /// @brief Field radius, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field spawnDropped, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_spawnDropped, put = __cordl_internal_set_spawnDropped)) bool spawnDropped;

  /// @brief Method BeginSpawning, addr 0x2ab1ca4, size 0x44, virtual false, abstract: false, final false
  inline void BeginSpawning();

  /// @brief Method CleanUpCallbacks, addr 0x2ab1ce8, size 0x10c, virtual true, abstract: false, final false
  inline void CleanUpCallbacks();

  static inline ::GlobalNamespace::TestItemSpawner* New_ctor();

  /// @brief Method OnItemSpawned, addr 0x2ab204c, size 0xd8, virtual true, abstract: false, final false
  inline void OnItemSpawned(::GlobalNamespace::Item* item);

  /// @brief Method OnJoinedPhotonRoom, addr 0x2ab1df4, size 0x134, virtual false, abstract: false, final false
  inline void OnJoinedPhotonRoom(::StringW photonRoomName);

  /// @brief Method OnStart, addr 0x2ab1aa8, size 0x1fc, virtual true, abstract: false, final false
  inline void OnStart();

  /// @brief Method TryGetSpawnTransformationData, addr 0x2ab1f28, size 0x124, virtual true, abstract: false, final false
  inline bool TryGetSpawnTransformationData(ByRef<::GlobalNamespace::ItemTransformationData> itemTransformationData);

  constexpr ::UnityW<::GlobalNamespace::Item> const& __cordl_internal_get__lastSpawnedItem_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::Item>& __cordl_internal_get__lastSpawnedItem_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::StringW const& __cordl_internal_get_itemKey() const;

  constexpr ::StringW& __cordl_internal_get_itemKey();

  constexpr ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*& __cordl_internal_get_onItemSpawnedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*> const& __cordl_internal_get_onItemSpawnedCallbacks() const;

  constexpr bool const& __cordl_internal_get_onlySpawnIfHost() const;

  constexpr bool& __cordl_internal_get_onlySpawnIfHost();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr bool const& __cordl_internal_get_spawnDropped() const;

  constexpr bool& __cordl_internal_get_spawnDropped();

  constexpr void __cordl_internal_set__lastSpawnedItem_k__BackingField(::UnityW<::GlobalNamespace::Item> value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_itemKey(::StringW value);

  constexpr void __cordl_internal_set_onItemSpawnedCallbacks(::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate* value);

  constexpr void __cordl_internal_set_onlySpawnIfHost(bool value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_spawnDropped(bool value);

  /// @brief Method .ctor, addr 0x2ab2124, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lastSpawnedItem, addr 0x2ab1a98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Item> get_lastSpawnedItem();

  /// @brief Method set_lastSpawnedItem, addr 0x2ab1aa0, size 0x8, virtual false, abstract: false, final false
  inline void set_lastSpawnedItem(::GlobalNamespace::Item* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestItemSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TestItemSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestItemSpawner(TestItemSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestItemSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestItemSpawner(TestItemSpawner const&) = delete;

  /// @brief Field itemKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___itemKey;

  /// @brief Field count, offset: 0x30, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field radius, offset: 0x34, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field spawnDropped, offset: 0x38, size: 0x1, def value: None
  bool ___spawnDropped;

  /// @brief Field onlySpawnIfHost, offset: 0x39, size: 0x1, def value: None
  bool ___onlySpawnIfHost;

  /// @brief Field onItemSpawnedCallbacks, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate* ___onItemSpawnedCallbacks;

  /// @brief Field <lastSpawnedItem>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Item> ____lastSpawnedItem_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TestItemSpawner, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TestItemSpawner, ___itemKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestItemSpawner, ___count) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestItemSpawner, ___radius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestItemSpawner, ___spawnDropped) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestItemSpawner, ___onlySpawnIfHost) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestItemSpawner, ___onItemSpawnedCallbacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestItemSpawner, ____lastSpawnedItem_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TestItemSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestItemSpawner*, "", "TestItemSpawner");
NEED_NO_BOX(::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TestItemSpawner__OnItemSpawnedDelegate*, "", "TestItemSpawner/OnItemSpawnedDelegate");
