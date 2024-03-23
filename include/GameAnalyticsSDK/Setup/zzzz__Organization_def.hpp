#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Organization)
namespace GameAnalyticsSDK::Setup {
class Studio;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GameAnalyticsSDK::Setup {
class Organization;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Setup::Organization);
// Type: GameAnalyticsSDK.Setup::Organization
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Setup {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Setup::Organization*
class CORDL_TYPE Organization : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_Studios, put = set_Studios))::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>* Studios;

  /// @brief Field <ID>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ID_k__BackingField, put = __cordl_internal_set__ID_k__BackingField))::StringW _ID_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <Studios>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Studios_k__BackingField,
                      put = __cordl_internal_set__Studios_k__BackingField))::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>* _Studios_k__BackingField;

  __declspec(property(get = get_ID, put = set_ID))::StringW _cordl_ID;

  /// @brief Method GetOrganizationNames, addr 0x1081734, size 0x284, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetOrganizationNames(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Organization*>* organizations, bool addFirstEmpty);

  static inline ::GameAnalyticsSDK::Setup::Organization* New_ctor(::StringW name, ::StringW id);

  constexpr ::StringW const& __cordl_internal_get__ID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>*& __cordl_internal_get__Studios_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>*> const& __cordl_internal_get__Studios_k__BackingField() const;

  constexpr void __cordl_internal_set__ID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Studios_k__BackingField(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>* value);

  /// @brief Method .ctor, addr 0x10816a0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW id);

  /// @brief Method get_ID, addr 0x1081680, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ID();

  /// @brief Method get_Name, addr 0x1081670, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Studios, addr 0x1081690, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>* get_Studios();

  /// @brief Method set_ID, addr 0x1081688, size 0x8, virtual false, abstract: false, final false
  inline void set_ID(::StringW value);

  /// @brief Method set_Name, addr 0x1081678, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Studios, addr 0x1081698, size 0x8, virtual false, abstract: false, final false
  inline void set_Studios(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Organization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Organization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Organization(Organization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Organization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Organization(Organization const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <ID>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____ID_k__BackingField;

  /// @brief Field <Studios>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>* ____Studios_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Setup::Organization, 0x28>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Organization, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Organization, ____ID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Organization, ____Studios_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Setup
NEED_NO_BOX(::GameAnalyticsSDK::Setup::Organization);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Setup::Organization*, "GameAnalyticsSDK.Setup", "Organization");
