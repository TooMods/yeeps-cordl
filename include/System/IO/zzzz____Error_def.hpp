#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(__Error)
// Forward declare root types
namespace System::IO {
class __Error;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::__Error);
// Type: System.IO::__Error
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::__Error*
class CORDL_TYPE __Error : public ::System::Object {
public:
  // Declarations
  /// @brief Method EndOfFile, addr 0x1fbfc70, size 0x60, virtual false, abstract: false, final false
  static inline void EndOfFile();

  /// @brief Method FileNotOpen, addr 0x1fbfcd0, size 0x64, virtual false, abstract: false, final false
  static inline void FileNotOpen();

  /// @brief Method GetDisplayablePath, addr 0x1fbfd98, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW GetDisplayablePath(::StringW path, bool isInvalidPath);

  /// @brief Method ReaderClosed, addr 0x1fbfd34, size 0x64, virtual false, abstract: false, final false
  static inline void ReaderClosed();

  /// @brief Method WinIOError, addr 0x1fc0078, size 0x5a0, virtual false, abstract: false, final false
  static inline void WinIOError(int32_t errorCode, ::StringW maybeFullPath);

  /// @brief Method WriterClosed, addr 0x1fc0618, size 0x64, virtual false, abstract: false, final false
  static inline void WriterClosed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Error();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Error", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Error(__Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Error", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Error(__Error const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Error, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::__Error);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Error*, "System.IO", "__Error");
