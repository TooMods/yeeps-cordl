#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/zzzz__RequestFailedException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MintException)
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Unity::Services::Vivox {
struct MintExceptionCode;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class MintException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::MintException);
// Type: Unity.Services.Vivox::MintException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::MintException*
class CORDL_TYPE MintException : public ::Unity::Services::Core::RequestFailedException {
public:
  // Declarations
  __declspec(property(get = get_Detail))::StringW Detail;

  __declspec(property(get = get_ExceptionCode))::Unity::Services::Vivox::MintExceptionCode ExceptionCode;

  __declspec(property(get = get_ExpiresAt))::System::Nullable_1<::System::DateTime> ExpiresAt;

  static inline ::Unity::Services::Vivox::MintException* New_ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x1c1329c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

  /// @brief Method get_Detail, addr 0x1c13154, size 0x88, virtual false, abstract: false, final false
  inline ::StringW get_Detail();

  /// @brief Method get_ExceptionCode, addr 0x1c13294, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::MintExceptionCode get_ExceptionCode();

  /// @brief Method get_ExpiresAt, addr 0x1c131dc, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_ExpiresAt();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MintException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MintException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MintException(MintException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MintException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MintException(MintException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::MintException, 0x90>, "Size mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::MintException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::MintException*, "Unity.Services.Vivox", "MintException");
