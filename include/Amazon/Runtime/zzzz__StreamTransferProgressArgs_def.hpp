#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamTransferProgressArgs)
// Forward declare root types
namespace Amazon::Runtime {
class StreamTransferProgressArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::StreamTransferProgressArgs);
// Type: Amazon.Runtime::StreamTransferProgressArgs
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::StreamTransferProgressArgs*
class CORDL_TYPE StreamTransferProgressArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_IncrementTransferred)) int64_t IncrementTransferred;

  __declspec(property(get = get_PercentDone)) int32_t PercentDone;

  __declspec(property(get = get_TotalBytes)) int64_t TotalBytes;

  __declspec(property(get = get_TransferredBytes)) int64_t TransferredBytes;

  /// @brief Field _incrementTransferred, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__incrementTransferred, put = __cordl_internal_set__incrementTransferred)) int64_t _incrementTransferred;

  /// @brief Field _total, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__total, put = __cordl_internal_set__total)) int64_t _total;

  /// @brief Field _transferred, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transferred, put = __cordl_internal_set__transferred)) int64_t _transferred;

  static inline ::Amazon::Runtime::StreamTransferProgressArgs* New_ctor(int64_t incrementTransferred, int64_t transferred, int64_t total);

  /// @brief Method ToString, addr 0x20211f8, size 0x234, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int64_t const& __cordl_internal_get__incrementTransferred() const;

  constexpr int64_t& __cordl_internal_get__incrementTransferred();

  constexpr int64_t const& __cordl_internal_get__total() const;

  constexpr int64_t& __cordl_internal_get__total();

  constexpr int64_t const& __cordl_internal_get__transferred() const;

  constexpr int64_t& __cordl_internal_get__transferred();

  constexpr void __cordl_internal_set__incrementTransferred(int64_t value);

  constexpr void __cordl_internal_set__total(int64_t value);

  constexpr void __cordl_internal_set__transferred(int64_t value);

  /// @brief Method .ctor, addr 0x202114c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int64_t incrementTransferred, int64_t transferred, int64_t total);

  /// @brief Method get_IncrementTransferred, addr 0x20211e0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_IncrementTransferred();

  /// @brief Method get_PercentDone, addr 0x20211cc, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_PercentDone();

  /// @brief Method get_TotalBytes, addr 0x20211f0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_TotalBytes();

  /// @brief Method get_TransferredBytes, addr 0x20211e8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_TransferredBytes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamTransferProgressArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamTransferProgressArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamTransferProgressArgs(StreamTransferProgressArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamTransferProgressArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamTransferProgressArgs(StreamTransferProgressArgs const&) = delete;

  /// @brief Field _incrementTransferred, offset: 0x10, size: 0x8, def value: None
  int64_t ____incrementTransferred;

  /// @brief Field _total, offset: 0x18, size: 0x8, def value: None
  int64_t ____total;

  /// @brief Field _transferred, offset: 0x20, size: 0x8, def value: None
  int64_t ____transferred;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::StreamTransferProgressArgs, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::StreamTransferProgressArgs, ____incrementTransferred) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::StreamTransferProgressArgs, ____total) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::StreamTransferProgressArgs, ____transferred) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::StreamTransferProgressArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::StreamTransferProgressArgs*, "Amazon.Runtime", "StreamTransferProgressArgs");
