#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystem)
namespace GlobalNamespace {
struct __Interop__ErrorInfo;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
class FileSystem;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileSystem);
// Type: System.IO::FileSystem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::FileSystem*
class CORDL_TYPE FileSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateDirectory, addr 0x2585c34, size 0x5e0, virtual false, abstract: false, final false
  static inline void CreateDirectory(::StringW fullPath);

  /// @brief Method DeleteFile, addr 0x2587330, size 0x1ac, virtual false, abstract: false, final false
  static inline void DeleteFile(::StringW fullPath);

  /// @brief Method DirectoryExists, addr 0x25863dc, size 0x20, virtual false, abstract: false, final false
  static inline bool DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath);

  /// @brief Method DirectoryExists, addr 0x2588c64, size 0x100c, virtual false, abstract: false, final false
  static inline bool DirectoryExists(::System::ReadOnlySpan_1<char16_t> fullPath, ByRef<::GlobalNamespace::__Interop__ErrorInfo> errorInfo);

  /// @brief Method FileExists, addr 0x25874dc, size 0x7c, virtual false, abstract: false, final false
  static inline bool FileExists(::System::ReadOnlySpan_1<char16_t> fullPath);

  /// @brief Method FileExists, addr 0x2588b54, size 0x110, virtual false, abstract: false, final false
  static inline bool FileExists(::System::ReadOnlySpan_1<char16_t> fullPath, int32_t fileType, ByRef<::GlobalNamespace::__Interop__ErrorInfo> errorInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystem(FileSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystem(FileSystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileSystem, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileSystem);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystem*, "System.IO", "FileSystem");
