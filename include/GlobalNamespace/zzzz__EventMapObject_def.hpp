#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventMapObject)
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class EventMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EventMapObject);
// Type: ::EventMapObject
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EventMapObject*
class CORDL_TYPE EventMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field onInitializeEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_onInitializeEvent, put = __cordl_internal_set_onInitializeEvent))::UnityEngine::Events::UnityEvent* onInitializeEvent;

  /// @brief Method Initialize, addr 0x3079710, size 0x50, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerUserID, bool placementPending, bool instant);

  static inline ::GlobalNamespace::EventMapObject* New_ctor();

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onInitializeEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_onInitializeEvent() const;

  constexpr void __cordl_internal_set_onInitializeEvent(::UnityEngine::Events::UnityEvent* value);

  /// @brief Method .ctor, addr 0x3079760, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventMapObject(EventMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventMapObject(EventMapObject const&) = delete;

  /// @brief Field onInitializeEvent, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___onInitializeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EventMapObject, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EventMapObject, ___onInitializeEvent) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EventMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventMapObject*, "", "EventMapObject");
