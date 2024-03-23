#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomNavigation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomNavigation)
namespace GlobalNamespace {
class NavigationSignPost;
}
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
class RoomMap;
}
namespace GlobalNamespace {
class RoomNavigationDisplay;
}
namespace GlobalNamespace {
class __RoomMap__CheckDestination;
}
namespace GlobalNamespace {
class __RoomMap__Node;
}
namespace GlobalNamespace {
struct __RoomNavigation__DestinationType;
}
namespace GlobalNamespace {
class __RoomNavigation____c;
}
// Forward declare root types
namespace GlobalNamespace {
struct __RoomNavigation__DestinationType;
}
namespace GlobalNamespace {
class RoomNavigation;
}
namespace GlobalNamespace {
class __RoomNavigation____c;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__RoomNavigation__DestinationType);
MARK_REF_PTR_T(::GlobalNamespace::RoomNavigation);
MARK_REF_PTR_T(::GlobalNamespace::__RoomNavigation____c);
// Type: ::DestinationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomNavigation::DestinationType
struct CORDL_TYPE __RoomNavigation__DestinationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RoomNavigation__DestinationType_Unwrapped
  enum struct ____RoomNavigation__DestinationType_Unwrapped : int32_t {
    __E_none = static_cast<int32_t>(0x0),
    __E_room = static_cast<int32_t>(0x1),
    __E_player = static_cast<int32_t>(0x2),
    __E_anyOfficialRoom = static_cast<int32_t>(0x3),
    __E_anyWildsRoom = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RoomNavigation__DestinationType_Unwrapped() const noexcept {
    return static_cast<____RoomNavigation__DestinationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomNavigation__DestinationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RoomNavigation__DestinationType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field anyOfficialRoom value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__RoomNavigation__DestinationType const anyOfficialRoom;

  /// @brief Field anyWildsRoom value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__RoomNavigation__DestinationType const anyWildsRoom;

  /// @brief Field none value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__RoomNavigation__DestinationType const none;

  /// @brief Field player value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__RoomNavigation__DestinationType const player;

  /// @brief Field room value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__RoomNavigation__DestinationType const room;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomNavigation__DestinationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomNavigation__DestinationType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomNavigation::<>c*
class CORDL_TYPE __RoomNavigation____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__RoomNavigation____c* __9;

  /// @brief Field <>9__36_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__36_0, put = setStaticF___9__36_0))::GlobalNamespace::__RoomMap__CheckDestination* __9__36_0;

  /// @brief Field <>9__36_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__36_1, put = setStaticF___9__36_1))::GlobalNamespace::__RoomMap__CheckDestination* __9__36_1;

  static inline ::GlobalNamespace::__RoomNavigation____c* New_ctor();

  /// @brief Method <Refresh>b__36_0, addr 0x175e1dc, size 0x18, virtual false, abstract: false, final false
  inline bool _Refresh_b__36_0(::GlobalNamespace::__RoomMap__Node* node);

  /// @brief Method <Refresh>b__36_1, addr 0x175e1f4, size 0x18, virtual false, abstract: false, final false
  inline bool _Refresh_b__36_1(::GlobalNamespace::__RoomMap__Node* node);

  /// @brief Method .ctor, addr 0x175e1d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__RoomNavigation____c* getStaticF___9();

  static inline ::GlobalNamespace::__RoomMap__CheckDestination* getStaticF___9__36_0();

  static inline ::GlobalNamespace::__RoomMap__CheckDestination* getStaticF___9__36_1();

  static inline void setStaticF___9(::GlobalNamespace::__RoomNavigation____c* value);

  static inline void setStaticF___9__36_0(::GlobalNamespace::__RoomMap__CheckDestination* value);

  static inline void setStaticF___9__36_1(::GlobalNamespace::__RoomMap__CheckDestination* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomNavigation____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomNavigation____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomNavigation____c(__RoomNavigation____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomNavigation____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomNavigation____c(__RoomNavigation____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomNavigation____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomNavigation
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomNavigation*
class CORDL_TYPE RoomNavigation : public ::System::Object {
public:
  // Declarations
  using DestinationType = ::GlobalNamespace::__RoomNavigation__DestinationType;

  using __c = ::GlobalNamespace::__RoomNavigation____c;

  /// @brief Field <destinationID>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationID_k__BackingField, put = __cordl_internal_set__destinationID_k__BackingField))::StringW _destinationID_k__BackingField;

  /// @brief Field <destinationName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationName_k__BackingField, put = __cordl_internal_set__destinationName_k__BackingField))::StringW _destinationName_k__BackingField;

  /// @brief Field <destinationNode>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__destinationNode_k__BackingField,
                      put = __cordl_internal_set__destinationNode_k__BackingField))::GlobalNamespace::__RoomMap__Node* _destinationNode_k__BackingField;

  /// @brief Field <destinationType>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__destinationType_k__BackingField,
                      put = __cordl_internal_set__destinationType_k__BackingField))::GlobalNamespace::__RoomNavigation__DestinationType _destinationType_k__BackingField;

  /// @brief Field <isDestinationInDifferentRoomMap>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__isDestinationInDifferentRoomMap_k__BackingField,
                      put = __cordl_internal_set__isDestinationInDifferentRoomMap_k__BackingField)) bool _isDestinationInDifferentRoomMap_k__BackingField;

  /// @brief Field <persistant>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__persistant_k__BackingField, put = __cordl_internal_set__persistant_k__BackingField)) bool _persistant_k__BackingField;

  /// @brief Field <roomMap>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__roomMap_k__BackingField, put = __cordl_internal_set__roomMap_k__BackingField))::GlobalNamespace::RoomMap* _roomMap_k__BackingField;

  __declspec(property(get = get_destinationID, put = set_destinationID))::StringW destinationID;

  __declspec(property(get = get_destinationName, put = set_destinationName))::StringW destinationName;

  __declspec(property(get = get_destinationNode, put = set_destinationNode))::GlobalNamespace::__RoomMap__Node* destinationNode;

  __declspec(property(get = get_destinationType, put = set_destinationType))::GlobalNamespace::__RoomNavigation__DestinationType destinationType;

  /// @brief Field display, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_display, put = __cordl_internal_set_display))::UnityW<::GlobalNamespace::RoomNavigationDisplay> display;

  __declspec(property(get = get_isDestinationInDifferentRoomMap, put = set_isDestinationInDifferentRoomMap)) bool isDestinationInDifferentRoomMap;

  __declspec(property(get = get_persistant, put = set_persistant)) bool persistant;

  /// @brief Field registeredSignPost, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredSignPost, put = __cordl_internal_set_registeredSignPost))::UnityW<::GlobalNamespace::NavigationSignPost> registeredSignPost;

  __declspec(property(get = get_roomMap, put = set_roomMap))::GlobalNamespace::RoomMap* roomMap;

  /// @brief Method Cancel, addr 0x175df1c, size 0x5c, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method ChangeDestination, addr 0x175dc08, size 0x10, virtual false, abstract: false, final false
  inline void ChangeDestination(::GlobalNamespace::__RoomMap__Node* destinationNode, bool isDestinationInDifferentRoomMap);

  /// @brief Method DeleteDisplay, addr 0x175df78, size 0xb8, virtual false, abstract: false, final false
  inline void DeleteDisplay();

  /// @brief Method IsAtDestination, addr 0x175e108, size 0x68, virtual false, abstract: false, final false
  inline bool IsAtDestination(::GlobalNamespace::RoomData* curRoomData);

  static inline ::GlobalNamespace::RoomNavigation* New_ctor(::GlobalNamespace::RoomMap* roomMap, ::GlobalNamespace::__RoomMap__Node* destinationNode, ::StringW destinationName,
                                                            ::GlobalNamespace::__RoomNavigation__DestinationType destinationType, ::StringW destinationID, bool isDestinationInDifferentRoomMap,
                                                            bool persistant);

  /// @brief Method OnComplete, addr 0x175e100, size 0x4, virtual false, abstract: false, final false
  inline void OnComplete();

  /// @brief Method OnInvalidated, addr 0x175e104, size 0x4, virtual false, abstract: false, final false
  inline void OnInvalidated();

  /// @brief Method Refresh, addr 0x175dc18, size 0x304, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::StringW const& __cordl_internal_get__destinationID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__destinationID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__destinationName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__destinationName_k__BackingField();

  constexpr ::GlobalNamespace::__RoomMap__Node*& __cordl_internal_get__destinationNode_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& __cordl_internal_get__destinationNode_k__BackingField() const;

  constexpr ::GlobalNamespace::__RoomNavigation__DestinationType const& __cordl_internal_get__destinationType_k__BackingField() const;

  constexpr ::GlobalNamespace::__RoomNavigation__DestinationType& __cordl_internal_get__destinationType_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDestinationInDifferentRoomMap_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDestinationInDifferentRoomMap_k__BackingField();

  constexpr bool const& __cordl_internal_get__persistant_k__BackingField() const;

  constexpr bool& __cordl_internal_get__persistant_k__BackingField();

  constexpr ::GlobalNamespace::RoomMap*& __cordl_internal_get__roomMap_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomMap*> const& __cordl_internal_get__roomMap_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::RoomNavigationDisplay> const& __cordl_internal_get_display() const;

  constexpr ::UnityW<::GlobalNamespace::RoomNavigationDisplay>& __cordl_internal_get_display();

  constexpr ::UnityW<::GlobalNamespace::NavigationSignPost> const& __cordl_internal_get_registeredSignPost() const;

  constexpr ::UnityW<::GlobalNamespace::NavigationSignPost>& __cordl_internal_get_registeredSignPost();

  constexpr void __cordl_internal_set__destinationID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__destinationName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__destinationNode_k__BackingField(::GlobalNamespace::__RoomMap__Node* value);

  constexpr void __cordl_internal_set__destinationType_k__BackingField(::GlobalNamespace::__RoomNavigation__DestinationType value);

  constexpr void __cordl_internal_set__isDestinationInDifferentRoomMap_k__BackingField(bool value);

  constexpr void __cordl_internal_set__persistant_k__BackingField(bool value);

  constexpr void __cordl_internal_set__roomMap_k__BackingField(::GlobalNamespace::RoomMap* value);

  constexpr void __cordl_internal_set_display(::UnityW<::GlobalNamespace::RoomNavigationDisplay> value);

  constexpr void __cordl_internal_set_registeredSignPost(::UnityW<::GlobalNamespace::NavigationSignPost> value);

  /// @brief Method .ctor, addr 0x175db94, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::RoomMap* roomMap, ::GlobalNamespace::__RoomMap__Node* destinationNode, ::StringW destinationName,
                    ::GlobalNamespace::__RoomNavigation__DestinationType destinationType, ::StringW destinationID, bool isDestinationInDifferentRoomMap, bool persistant);

  /// @brief Method get_destinationID, addr 0x175db5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_destinationID();

  /// @brief Method get_destinationName, addr 0x175db3c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_destinationName();

  /// @brief Method get_destinationNode, addr 0x175db2c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RoomMap__Node* get_destinationNode();

  /// @brief Method get_destinationType, addr 0x175db4c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RoomNavigation__DestinationType get_destinationType();

  /// @brief Method get_isDestinationInDifferentRoomMap, addr 0x175db6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDestinationInDifferentRoomMap();

  /// @brief Method get_persistant, addr 0x175db80, size 0x8, virtual false, abstract: false, final false
  inline bool get_persistant();

  /// @brief Method get_roomMap, addr 0x175db1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RoomMap* get_roomMap();

  /// @brief Method set_destinationID, addr 0x175db64, size 0x8, virtual false, abstract: false, final false
  inline void set_destinationID(::StringW value);

  /// @brief Method set_destinationName, addr 0x175db44, size 0x8, virtual false, abstract: false, final false
  inline void set_destinationName(::StringW value);

  /// @brief Method set_destinationNode, addr 0x175db34, size 0x8, virtual false, abstract: false, final false
  inline void set_destinationNode(::GlobalNamespace::__RoomMap__Node* value);

  /// @brief Method set_destinationType, addr 0x175db54, size 0x8, virtual false, abstract: false, final false
  inline void set_destinationType(::GlobalNamespace::__RoomNavigation__DestinationType value);

  /// @brief Method set_isDestinationInDifferentRoomMap, addr 0x175db74, size 0xc, virtual false, abstract: false, final false
  inline void set_isDestinationInDifferentRoomMap(bool value);

  /// @brief Method set_persistant, addr 0x175db88, size 0xc, virtual false, abstract: false, final false
  inline void set_persistant(bool value);

  /// @brief Method set_roomMap, addr 0x175db24, size 0x8, virtual false, abstract: false, final false
  inline void set_roomMap(::GlobalNamespace::RoomMap* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomNavigation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomNavigation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomNavigation(RoomNavigation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomNavigation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomNavigation(RoomNavigation const&) = delete;

  /// @brief Field <roomMap>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::RoomMap* ____roomMap_k__BackingField;

  /// @brief Field <destinationNode>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMap__Node* ____destinationNode_k__BackingField;

  /// @brief Field <destinationName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____destinationName_k__BackingField;

  /// @brief Field <destinationType>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__RoomNavigation__DestinationType ____destinationType_k__BackingField;

  /// @brief Field <destinationID>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____destinationID_k__BackingField;

  /// @brief Field <isDestinationInDifferentRoomMap>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____isDestinationInDifferentRoomMap_k__BackingField;

  /// @brief Field <persistant>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____persistant_k__BackingField;

  /// @brief Field display, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomNavigationDisplay> ___display;

  /// @brief Field registeredSignPost, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NavigationSignPost> ___registeredSignPost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomNavigation, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigation, ____roomMap_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigation, ____destinationNode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigation, ____destinationName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigation, ____destinationType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigation, ____destinationID_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigation, ____isDestinationInDifferentRoomMap_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigation, ____persistant_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigation, ___display) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomNavigation, ___registeredSignPost) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomNavigation__DestinationType, "", "RoomNavigation/DestinationType");
NEED_NO_BOX(::GlobalNamespace::RoomNavigation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomNavigation*, "", "RoomNavigation");
NEED_NO_BOX(::GlobalNamespace::__RoomNavigation____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomNavigation____c*, "", "RoomNavigation/<>c");
