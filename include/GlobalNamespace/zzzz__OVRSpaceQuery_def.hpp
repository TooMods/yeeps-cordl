#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpaceQuery)
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryActionType;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryInfo;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceQueryType;
}
namespace GlobalNamespace {
struct __OVRSpaceQuery__Options;
}
namespace GlobalNamespace {
struct __OVRSpace__StorageLocation;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSpaceQuery;
}
namespace GlobalNamespace {
struct __OVRSpaceQuery__Options;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSpaceQuery);
MARK_VAL_T(::GlobalNamespace::__OVRSpaceQuery__Options);
// Type: ::Options
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSpaceQuery::Options
struct CORDL_TYPE __OVRSpaceQuery__Options {
public:
  // Declarations
  __declspec(property(get = get_ActionType, put = set_ActionType))::GlobalNamespace::__OVRPlugin__SpaceQueryActionType ActionType;

  __declspec(property(get = get_ComponentFilter, put = set_ComponentFilter))::GlobalNamespace::__OVRPlugin__SpaceComponentType ComponentFilter;

  /// @brief Field ComponentTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ComponentTypes,
                             put = setStaticF_ComponentTypes))::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> ComponentTypes;

  /// @brief Field Ids, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ids, put = setStaticF_Ids))::ArrayW<::System::Guid, ::Array<::System::Guid>*> Ids;

  __declspec(property(get = get_Location, put = set_Location))::GlobalNamespace::__OVRSpace__StorageLocation Location;

  __declspec(property(get = get_MaxResults, put = set_MaxResults)) int32_t MaxResults;

  __declspec(property(get = get_QueryType, put = set_QueryType))::GlobalNamespace::__OVRPlugin__SpaceQueryType QueryType;

  __declspec(property(get = get_Timeout, put = set_Timeout)) double_t Timeout;

  __declspec(property(get = get_UuidFilter, put = set_UuidFilter))::System::Collections::Generic::IEnumerable_1<::System::Guid>* UuidFilter;

  /// @brief Method ToQueryInfo, addr 0x1497898, size 0x374, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceQueryInfo ToQueryInfo();

  /// @brief Method TryQuerySpaces, addr 0x1497c0c, size 0x15c, virtual false, abstract: false, final false
  inline bool TryQuerySpaces(ByRef<uint64_t> requestId);

  /// @brief Method ValidateSingleFilter, addr 0x1497620, size 0x5c, virtual false, abstract: false, final false
  static inline void ValidateSingleFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuidFilter, ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentFilter);

  /// @brief Method .ctor, addr 0x1497864, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__OVRSpaceQuery__Options other);

  static inline ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> getStaticF_ComponentTypes();

  static inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> getStaticF_Ids();

  /// @brief Method get_ActionType, addr 0x1497598, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType get_ActionType();

  /// @brief Method get_ComponentFilter, addr 0x14975a8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_ComponentFilter();

  /// @brief Method get_Location, addr 0x1497578, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRSpace__StorageLocation get_Location();

  /// @brief Method get_MaxResults, addr 0x1497558, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxResults();

  /// @brief Method get_QueryType, addr 0x1497588, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceQueryType get_QueryType();

  /// @brief Method get_Timeout, addr 0x1497568, size 0x8, virtual false, abstract: false, final false
  inline double_t get_Timeout();

  /// @brief Method get_UuidFilter, addr 0x149767c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Guid>* get_UuidFilter();

  static inline void setStaticF_ComponentTypes(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> value);

  static inline void setStaticF_Ids(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value);

  /// @brief Method set_ActionType, addr 0x14975a0, size 0x8, virtual false, abstract: false, final false
  inline void set_ActionType(::GlobalNamespace::__OVRPlugin__SpaceQueryActionType value);

  /// @brief Method set_ComponentFilter, addr 0x14975b0, size 0x70, virtual false, abstract: false, final false
  inline void set_ComponentFilter(::GlobalNamespace::__OVRPlugin__SpaceComponentType value);

  /// @brief Method set_Location, addr 0x1497580, size 0x8, virtual false, abstract: false, final false
  inline void set_Location(::GlobalNamespace::__OVRSpace__StorageLocation value);

  /// @brief Method set_MaxResults, addr 0x1497560, size 0x8, virtual false, abstract: false, final false
  inline void set_MaxResults(int32_t value);

  /// @brief Method set_QueryType, addr 0x1497590, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryType(::GlobalNamespace::__OVRPlugin__SpaceQueryType value);

  /// @brief Method set_Timeout, addr 0x1497570, size 0x8, virtual false, abstract: false, final false
  inline void set_Timeout(double_t value);

  /// @brief Method set_UuidFilter, addr 0x1497684, size 0x1e0, virtual false, abstract: false, final false
  inline void set_UuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpaceQuery__Options();

  // Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "",
  // def_value: None }, CppParam { name: "_Location_k__BackingField", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: None }, CppParam { name:
  // "_QueryType_k__BackingField", ty: "::GlobalNamespace::__OVRPlugin__SpaceQueryType", modifiers: "", def_value: None }, CppParam { name: "_ActionType_k__BackingField", ty:
  // "::GlobalNamespace::__OVRPlugin__SpaceQueryActionType", modifiers: "", def_value: None }, CppParam { name: "_componentType", ty: "::GlobalNamespace::__OVRPlugin__SpaceComponentType", modifiers:
  // "", def_value: None }, CppParam { name: "_uuidFilter", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None }]
  constexpr __OVRSpaceQuery__Options(int32_t _MaxResults_k__BackingField, double_t _Timeout_k__BackingField, ::GlobalNamespace::__OVRSpace__StorageLocation _Location_k__BackingField,
                                     ::GlobalNamespace::__OVRPlugin__SpaceQueryType _QueryType_k__BackingField, ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType _ActionType_k__BackingField,
                                     ::GlobalNamespace::__OVRPlugin__SpaceComponentType _componentType, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* _uuidFilter) noexcept;

  /// @brief Field <MaxResults>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _MaxResults_k__BackingField;

  /// @brief Field <Timeout>k__BackingField, offset: 0x8, size: 0x8, def value: None
  double_t _Timeout_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSpace__StorageLocation _Location_k__BackingField;

  /// @brief Field <QueryType>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceQueryType _QueryType_k__BackingField;

  /// @brief Field <ActionType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceQueryActionType _ActionType_k__BackingField;

  /// @brief Field _componentType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPlugin__SpaceComponentType _componentType;

  /// @brief Field _uuidFilter, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Guid>* _uuidFilter;

  /// @brief Field MaxUuidCount offset 0xffffffff size 0x4
  static constexpr int32_t MaxUuidCount{ static_cast<int32_t>(0x400) };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpaceQuery__Options, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpaceQuery__Options, _MaxResults_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpaceQuery__Options, _Timeout_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpaceQuery__Options, _Location_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpaceQuery__Options, _QueryType_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpaceQuery__Options, _ActionType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpaceQuery__Options, _componentType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRSpaceQuery__Options, _uuidFilter) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSpaceQuery
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSpaceQuery*
class CORDL_TYPE OVRSpaceQuery : public ::System::Object {
public:
  // Declarations
  using Options = ::GlobalNamespace::__OVRSpaceQuery__Options;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpaceQuery();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSpaceQuery(OVRSpaceQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSpaceQuery(OVRSpaceQuery const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceQuery, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSpaceQuery);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceQuery*, "", "OVRSpaceQuery");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpaceQuery__Options, "", "OVRSpaceQuery/Options");
