#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DirectoryInfo)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
class FileInfo;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System::IO {
struct SearchOption;
}
namespace System::IO {
struct SearchTarget;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class DirectoryInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::DirectoryInfo);
// Type: System.IO::DirectoryInfo
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::DirectoryInfo*
class CORDL_TYPE DirectoryInfo : public ::System::IO::FileSystemInfo {
public:
  // Declarations
  /// @brief Method GetFiles, addr 0x2586cf4, size 0xa0, virtual false, abstract: false, final false
  inline ::ArrayW<::System::IO::FileInfo*, ::Array<::System::IO::FileInfo*>*> GetFiles(::StringW searchPattern, ::System::IO::EnumerationOptions* enumerationOptions);

  /// @brief Method GetFiles, addr 0x2586b44, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<::System::IO::FileInfo*, ::Array<::System::IO::FileInfo*>*> GetFiles(::StringW searchPattern, ::System::IO::SearchOption searchOption);

  /// @brief Method Init, addr 0x25868b4, size 0x290, virtual false, abstract: false, final false
  inline void Init(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  /// @brief Method InternalEnumerateInfos, addr 0x2586d94, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>* InternalEnumerateInfos(::StringW path, ::StringW searchPattern, ::System::IO::SearchTarget searchTarget,
                                                                                                                     ::System::IO::EnumerationOptions* options);

  static inline ::System::IO::DirectoryInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::DirectoryInfo* New_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  static inline ::System::IO::DirectoryInfo* New_ctor(::StringW path);

  /// @brief Method .ctor, addr 0x2586f54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2586214, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized);

  /// @brief Method .ctor, addr 0x258682c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectoryInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectoryInfo(DirectoryInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectoryInfo(DirectoryInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::DirectoryInfo, 0xa8>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::DirectoryInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DirectoryInfo*, "System.IO", "DirectoryInfo");
