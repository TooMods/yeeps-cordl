#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOpRetry)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::Services::Vivox::Mint::Helpers {
template <typename T> class AsyncOpRetry_1;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Helpers {
class AsyncOpRetry;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry);
// Type: Unity.Services.Vivox.Mint.Helpers::AsyncOpRetry
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Helpers {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Helpers::AsyncOpRetry*
class CORDL_TYPE AsyncOpRetry : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromCreateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* FromCreateAsync(::System::Func_2<int32_t, T>* op);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOpRetry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncOpRetry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncOpRetry(AsyncOpRetry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncOpRetry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncOpRetry(AsyncOpRetry const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Helpers
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry*, "Unity.Services.Vivox.Mint.Helpers", "AsyncOpRetry");
