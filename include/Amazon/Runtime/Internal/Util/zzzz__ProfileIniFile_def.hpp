#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__IniFile_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProfileIniFile)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class ProfileIniFile;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::ProfileIniFile);
// Type: Amazon.Runtime.Internal.Util::ProfileIniFile
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::ProfileIniFile*
class CORDL_TYPE ProfileIniFile : public ::Amazon::Runtime::Internal::Util::IniFile {
public:
  // Declarations
  __declspec(property(get = get_ProfileMarkerRequired, put = set_ProfileMarkerRequired)) bool ProfileMarkerRequired;

  /// @brief Field <ProfileMarkerRequired>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__ProfileMarkerRequired_k__BackingField,
                      put = __cordl_internal_set__ProfileMarkerRequired_k__BackingField)) bool _ProfileMarkerRequired_k__BackingField;

  /// @brief Method ListSectionNames, addr 0x2444e60, size 0x270, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* ListSectionNames();

  static inline ::Amazon::Runtime::Internal::Util::ProfileIniFile* New_ctor(::StringW filePath, bool profileMarkerRequired);

  /// @brief Method TryGetSection, addr 0x24450f8, size 0x124, virtual true, abstract: false, final false
  inline bool TryGetSection(::StringW sectionName, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties);

  constexpr bool const& __cordl_internal_get__ProfileMarkerRequired_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ProfileMarkerRequired_k__BackingField();

  constexpr void __cordl_internal_set__ProfileMarkerRequired_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x24450d0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath, bool profileMarkerRequired);

  /// @brief Method get_ProfileMarkerRequired, addr 0x2444e4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ProfileMarkerRequired();

  /// @brief Method set_ProfileMarkerRequired, addr 0x2444e54, size 0xc, virtual false, abstract: false, final false
  inline void set_ProfileMarkerRequired(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfileIniFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfileIniFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfileIniFile(ProfileIniFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfileIniFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfileIniFile(ProfileIniFile const&) = delete;

  /// @brief Field <ProfileMarkerRequired>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____ProfileMarkerRequired_k__BackingField;

  /// @brief Field ProfileMarker offset 0xffffffff size 0x8
  static constexpr ::ConstString ProfileMarker{ u"profile" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::ProfileIniFile, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::ProfileIniFile, ____ProfileMarkerRequired_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::ProfileIniFile);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::ProfileIniFile*, "Amazon.Runtime.Internal.Util", "ProfileIniFile");
