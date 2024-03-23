#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Studio)
namespace GameAnalyticsSDK::Setup {
class Game;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GameAnalyticsSDK::Setup {
class Studio;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Setup::Studio);
// Type: GameAnalyticsSDK.Setup::Studio
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Setup {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Setup::Studio*
class CORDL_TYPE Studio : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Games, put = set_Games))::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>* Games;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_OrganizationID, put = set_OrganizationID))::StringW OrganizationID;

  /// @brief Field <Games>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Games_k__BackingField,
                      put = __cordl_internal_set__Games_k__BackingField))::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>* _Games_k__BackingField;

  /// @brief Field <ID>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ID_k__BackingField, put = __cordl_internal_set__ID_k__BackingField))::StringW _ID_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field <OrganizationID>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__OrganizationID_k__BackingField, put = __cordl_internal_set__OrganizationID_k__BackingField))::StringW _OrganizationID_k__BackingField;

  __declspec(property(get = get_ID, put = set_ID))::StringW _cordl_ID;

  /// @brief Method GetGameNames, addr 0x1081cb0, size 0x270, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetGameNames(int32_t index, ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>* studios);

  /// @brief Method GetStudioNames, addr 0x1081a38, size 0x278, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetStudioNames(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Studio*>* studios, bool addFirstEmpty);

  static inline ::GameAnalyticsSDK::Setup::Studio* New_ctor(::StringW name, ::StringW id, ::StringW orgId, ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>* games);

  constexpr ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>*& __cordl_internal_get__Games_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>*> const& __cordl_internal_get__Games_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ID_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__OrganizationID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__OrganizationID_k__BackingField();

  constexpr void __cordl_internal_set__Games_k__BackingField(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>* value);

  constexpr void __cordl_internal_set__ID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__OrganizationID_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x10819f8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW id, ::StringW orgId, ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>* games);

  /// @brief Method get_Games, addr 0x10819e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>* get_Games();

  /// @brief Method get_ID, addr 0x10819c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ID();

  /// @brief Method get_Name, addr 0x10819b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_OrganizationID, addr 0x10819d8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_OrganizationID();

  /// @brief Method set_Games, addr 0x10819f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Games(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>* value);

  /// @brief Method set_ID, addr 0x10819d0, size 0x8, virtual false, abstract: false, final false
  inline void set_ID(::StringW value);

  /// @brief Method set_Name, addr 0x10819c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_OrganizationID, addr 0x10819e0, size 0x8, virtual false, abstract: false, final false
  inline void set_OrganizationID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Studio();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Studio", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Studio(Studio&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Studio", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Studio(Studio const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <ID>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____ID_k__BackingField;

  /// @brief Field <OrganizationID>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____OrganizationID_k__BackingField;

  /// @brief Field <Games>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Game*>* ____Games_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Setup::Studio, 0x30>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Studio, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Studio, ____ID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Studio, ____OrganizationID_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Studio, ____Games_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Setup
NEED_NO_BOX(::GameAnalyticsSDK::Setup::Studio);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Setup::Studio*, "GameAnalyticsSDK.Setup", "Studio");
