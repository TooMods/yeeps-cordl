#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPoolEventSource)
namespace System::Buffers {
struct __ArrayPoolEventSource__BufferAllocatedReason;
}
// Forward declare root types
namespace System::Buffers {
struct __ArrayPoolEventSource__BufferAllocatedReason;
}
namespace System::Buffers {
class ArrayPoolEventSource;
}
// Write type traits
MARK_VAL_T(::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason);
MARK_REF_PTR_T(::System::Buffers::ArrayPoolEventSource);
// Type: ::BufferAllocatedReason
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Buffers {
// Is value type: true
// CS Name: ::ArrayPoolEventSource::BufferAllocatedReason
struct CORDL_TYPE __ArrayPoolEventSource__BufferAllocatedReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ArrayPoolEventSource__BufferAllocatedReason_Unwrapped
  enum struct ____ArrayPoolEventSource__BufferAllocatedReason_Unwrapped : int32_t {
    __E_Pooled = static_cast<int32_t>(0x0),
    __E_OverMaximumSize = static_cast<int32_t>(0x1),
    __E_PoolExhausted = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ArrayPoolEventSource__BufferAllocatedReason_Unwrapped() const noexcept {
    return static_cast<____ArrayPoolEventSource__BufferAllocatedReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayPoolEventSource__BufferAllocatedReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ArrayPoolEventSource__BufferAllocatedReason(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field OverMaximumSize value: static_cast<int32_t>(0x1)
  static ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason const OverMaximumSize;

  /// @brief Field PoolExhausted value: static_cast<int32_t>(0x2)
  static ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason const PoolExhausted;

  /// @brief Field Pooled value: static_cast<int32_t>(0x0)
  static ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason const Pooled;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason, value__) == 0x0, "Offset mismatch!");

} // namespace System::Buffers
// Type: System.Buffers::ArrayPoolEventSource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Buffers {
// Is value type: false
// CS Name: ::System.Buffers::ArrayPoolEventSource*
class CORDL_TYPE ArrayPoolEventSource : public ::System::Diagnostics::Tracing::EventSource {
public:
  // Declarations
  using BufferAllocatedReason = ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason;

  /// @brief Field Log, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Log, put = setStaticF_Log))::System::Buffers::ArrayPoolEventSource* Log;

  /// @brief Method BufferAllocated, addr 0x21d80f0, size 0x108, virtual false, abstract: false, final false
  inline void BufferAllocated(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId, ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason reason);

  /// @brief Method BufferRented, addr 0x21d8004, size 0xec, virtual false, abstract: false, final false
  inline void BufferRented(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId);

  /// @brief Method BufferReturned, addr 0x21d81f8, size 0x10, virtual false, abstract: false, final false
  inline void BufferReturned(int32_t bufferId, int32_t bufferSize, int32_t poolId);

  /// @brief Method BufferTrimPoll, addr 0x21d8218, size 0xc, virtual false, abstract: false, final false
  inline void BufferTrimPoll(int32_t milliseconds, int32_t pressure);

  /// @brief Method BufferTrimmed, addr 0x21d8208, size 0x10, virtual false, abstract: false, final false
  inline void BufferTrimmed(int32_t bufferId, int32_t bufferSize, int32_t poolId);

  static inline ::System::Buffers::ArrayPoolEventSource* New_ctor();

  /// @brief Method .ctor, addr 0x21d7f58, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Buffers::ArrayPoolEventSource* getStaticF_Log();

  static inline void setStaticF_Log(::System::Buffers::ArrayPoolEventSource* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayPoolEventSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayPoolEventSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayPoolEventSource(ArrayPoolEventSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPoolEventSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayPoolEventSource(ArrayPoolEventSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffers::ArrayPoolEventSource, 0x18>, "Size mismatch!");

} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason, "System.Buffers", "ArrayPoolEventSource/BufferAllocatedReason");
NEED_NO_BOX(::System::Buffers::ArrayPoolEventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::ArrayPoolEventSource*, "System.Buffers", "ArrayPoolEventSource");
