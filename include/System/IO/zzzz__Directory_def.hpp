#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Directory)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
struct SearchTarget;
}
// Forward declare root types
namespace System::IO {
class Directory;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Directory);
// Type: System.IO::Directory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::Directory*
class CORDL_TYPE Directory : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateDirectory, addr 0x2585ae0, size 0x154, virtual false, abstract: false, final false
  static inline ::System::IO::DirectoryInfo* CreateDirectory(::StringW path);

  /// @brief Method Exists, addr 0x2586260, size 0x17c, virtual false, abstract: false, final false
  static inline bool Exists(::StringW path);

  /// @brief Method GetCurrentDirectory, addr 0x2586788, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetCurrentDirectory();

  /// @brief Method GetFiles, addr 0x25863fc, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path, ::StringW searchPattern);

  /// @brief Method GetFiles, addr 0x258649c, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetFiles(::StringW path, ::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method InsecureGetCurrentDirectory, addr 0x2586790, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW InsecureGetCurrentDirectory();

  /// @brief Method InternalEnumeratePaths, addr 0x2586504, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* InternalEnumeratePaths(::StringW path, ::StringW searchPattern, ::System::IO::SearchTarget searchTarget,
                                                                                                 ::System::IO::EnumerationOptions* options);

  /// @brief Method InternalGetDirectoryRoot, addr 0x25866d0, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW InternalGetDirectoryRoot(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Directory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Directory(Directory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Directory(Directory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Directory, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::Directory);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Directory*, "System.IO", "Directory");
