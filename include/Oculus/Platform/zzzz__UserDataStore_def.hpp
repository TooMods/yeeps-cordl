#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserDataStore)
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform {
class UserDataStore;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::UserDataStore);
// Type: Oculus.Platform::UserDataStore
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::UserDataStore*
class CORDL_TYPE UserDataStore : public ::System::Object {
public:
  // Declarations
  /// @brief Method PrivateDeleteEntryByKey, addr 0x19c14d0, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PrivateDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method PrivateGetEntries, addr 0x19c1640, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* PrivateGetEntries(uint64_t userID);

  /// @brief Method PrivateGetEntryByKey, addr 0x19c17a0, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* PrivateGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method PrivateWriteEntry, addr 0x19c1910, size 0x178, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

  /// @brief Method PublicDeleteEntryByKey, addr 0x19c1a88, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PublicDeleteEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method PublicGetEntries, addr 0x19c1bf8, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* PublicGetEntries(uint64_t userID);

  /// @brief Method PublicGetEntryByKey, addr 0x19c1d58, size 0x170, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* PublicGetEntryByKey(uint64_t userID, ::StringW key);

  /// @brief Method PublicWriteEntry, addr 0x19c1ec8, size 0x178, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserDataStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserDataStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserDataStore(UserDataStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserDataStore(UserDataStore const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::UserDataStore, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::UserDataStore);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserDataStore*, "Oculus.Platform", "UserDataStore");
