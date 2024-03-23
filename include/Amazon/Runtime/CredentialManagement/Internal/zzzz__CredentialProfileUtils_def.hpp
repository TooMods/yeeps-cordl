#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CredentialProfileUtils)
namespace Amazon::Runtime::CredentialManagement::Internal {
struct CredentialProfileType;
}
namespace Amazon::Runtime::CredentialManagement {
class CredentialProfile;
}
namespace Amazon::Runtime::CredentialManagement {
class ICredentialProfileStore;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement::Internal {
class CredentialProfileUtils;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils);
// Type: Amazon.Runtime.CredentialManagement.Internal::CredentialProfileUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement.Internal::CredentialProfileUtils*
class CORDL_TYPE CredentialProfileUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnsureUniqueKeyAssigned, addr 0x2033560, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Guid EnsureUniqueKeyAssigned(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile,
                                                       ::Amazon::Runtime::CredentialManagement::ICredentialProfileStore* profileStore);

  /// @brief Method GetProfileType, addr 0x20337e0, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileType> GetProfileType(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile);

  /// @brief Method GetProperties, addr 0x2033468, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetProperties(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile);

  /// @brief Method GetProperty, addr 0x20334e8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetProperty(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile, ::StringW key);

  /// @brief Method GetUniqueKey, addr 0x20336d0, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueKey(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile);

  /// @brief Method IsCallbackRequired, addr 0x20337f0, size 0x10, virtual false, abstract: false, final false
  static inline bool IsCallbackRequired(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile);

  /// @brief Method SetProperty, addr 0x2033478, size 0x70, virtual false, abstract: false, final false
  static inline void SetProperty(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile, ::StringW key, ::StringW value);

  /// @brief Method SetUniqueKey, addr 0x20337a4, size 0x3c, virtual false, abstract: false, final false
  static inline void SetUniqueKey(::Amazon::Runtime::CredentialManagement::CredentialProfile* profile, ::System::Nullable_1<::System::Guid> uniqueKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CredentialProfileUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfileUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CredentialProfileUtils(CredentialProfileUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CredentialProfileUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CredentialProfileUtils(CredentialProfileUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::CredentialManagement::Internal
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::Internal::CredentialProfileUtils*, "Amazon.Runtime.CredentialManagement.Internal", "CredentialProfileUtils");
