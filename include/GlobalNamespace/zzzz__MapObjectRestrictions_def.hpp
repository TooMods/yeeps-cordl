#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MapObjectRestrictions)
namespace GlobalNamespace {
class MapObjectRestrictionData;
}
namespace GlobalNamespace {
struct __MapObjectRestrictions__MapObjectRestrictionDataRaw;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MapObjectRestrictions;
}
namespace GlobalNamespace {
struct __MapObjectRestrictions__MapObjectRestrictionDataRaw;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapObjectRestrictions);
MARK_VAL_T(::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw);
// Type: ::MapObjectRestrictionDataRaw
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MapObjectRestrictions::MapObjectRestrictionDataRaw
struct CORDL_TYPE __MapObjectRestrictions__MapObjectRestrictionDataRaw {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapObjectRestrictions__MapObjectRestrictionDataRaw();

  // Ctor Parameters [CppParam { name: "mapObjectKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "canRemoveLastInstance", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "maxCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MapObjectRestrictions__MapObjectRestrictionDataRaw(::StringW mapObjectKey, bool canRemoveLastInstance, int32_t maxCount) noexcept;

  /// @brief Field mapObjectKey, offset: 0x0, size: 0x8, def value: None
  ::StringW mapObjectKey;

  /// @brief Field canRemoveLastInstance, offset: 0x8, size: 0x1, def value: None
  bool canRemoveLastInstance;

  /// @brief Field maxCount, offset: 0xc, size: 0x4, def value: None
  int32_t maxCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, mapObjectKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, canRemoveLastInstance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, maxCount) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapObjectRestrictions
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapObjectRestrictions*
class CORDL_TYPE MapObjectRestrictions : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::MapObjectRestrictions>> {
public:
  // Declarations
  using MapObjectRestrictionDataRaw = ::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw;

  /// @brief Field mapObjectRestrictionDatas, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_mapObjectRestrictionDatas,
               put = setStaticF_mapObjectRestrictionDatas))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MapObjectRestrictionData*>* mapObjectRestrictionDatas;

  /// @brief Field mapObjectRestrictionDatasRaw, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mapObjectRestrictionDatasRaw,
                      put = __cordl_internal_set_mapObjectRestrictionDatasRaw))::ArrayW<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw,
                                                                                        ::Array<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw>*> mapObjectRestrictionDatasRaw;

  /// @brief Method CreateRestrictionDataDictionary, addr 0x3075b40, size 0x178, virtual false, abstract: false, final false
  static inline void CreateRestrictionDataDictionary();

  static inline ::GlobalNamespace::MapObjectRestrictions* New_ctor();

  /// @brief Method TryGetMapObjectRestrictionData, addr 0x3075cb8, size 0x94, virtual false, abstract: false, final false
  static inline bool TryGetMapObjectRestrictionData(::StringW mapObjectKey, ByRef<::GlobalNamespace::MapObjectRestrictionData*> mapObjectRestrictionData);

  constexpr ::ArrayW<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, ::Array<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw>*> const&
  __cordl_internal_get_mapObjectRestrictionDatasRaw() const;

  constexpr ::ArrayW<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, ::Array<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw>*>&
  __cordl_internal_get_mapObjectRestrictionDatasRaw();

  constexpr void __cordl_internal_set_mapObjectRestrictionDatasRaw(
      ::ArrayW<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, ::Array<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw>*> value);

  /// @brief Method .ctor, addr 0x3075d4c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MapObjectRestrictionData*>* getStaticF_mapObjectRestrictionDatas();

  static inline void setStaticF_mapObjectRestrictionDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MapObjectRestrictionData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapObjectRestrictions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapObjectRestrictions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapObjectRestrictions(MapObjectRestrictions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapObjectRestrictions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapObjectRestrictions(MapObjectRestrictions const&) = delete;

  /// @brief Field mapObjectRestrictionDatasRaw, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, ::Array<::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw>*> ___mapObjectRestrictionDatasRaw;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapObjectRestrictions, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapObjectRestrictions, ___mapObjectRestrictionDatasRaw) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapObjectRestrictions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapObjectRestrictions*, "", "MapObjectRestrictions");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapObjectRestrictions__MapObjectRestrictionDataRaw, "", "MapObjectRestrictions/MapObjectRestrictionDataRaw");
