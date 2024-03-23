#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__ReadOnlyWrapperStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PartialReadOnlyWrapperStream)
namespace Amazon::Runtime::Internal::Util {
struct __PartialReadOnlyWrapperStream___ReadAsync_d__6;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class PartialReadOnlyWrapperStream;
}
namespace Amazon::Runtime::Internal::Util {
struct __PartialReadOnlyWrapperStream___ReadAsync_d__6;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream);
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6);
// Type: ::<ReadAsync>d__6
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::PartialReadOnlyWrapperStream::<ReadAsync>d__6
struct CORDL_TYPE __PartialReadOnlyWrapperStream___ReadAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2445708, size 0x258, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2445960, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartialReadOnlyWrapperStream___ReadAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream*", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>",
  // modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None
  // }]
  constexpr __PartialReadOnlyWrapperStream___ReadAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, int32_t count,
                                                            ::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream* __4__this, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                            ::System::Threading::CancellationToken cancellationToken,
                                                            ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t count;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream* __4__this;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field offset, offset: 0x38, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, offset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, __u__1) == 0x48, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::PartialReadOnlyWrapperStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::PartialReadOnlyWrapperStream*
class CORDL_TYPE PartialReadOnlyWrapperStream : public ::Amazon::Runtime::Internal::Util::ReadOnlyWrapperStream {
public:
  // Declarations
  using _ReadAsync_d__6 = ::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position)) int64_t Position;

  __declspec(property(get = get_RemainingSize)) int64_t RemainingSize;

  /// @brief Field _currentPosition, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__currentPosition, put = __cordl_internal_set__currentPosition)) int64_t _currentPosition;

  /// @brief Field _size, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int64_t _size;

  static inline ::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream* New_ctor(::System::IO::Stream* baseStream, int64_t size);

  /// @brief Method Read, addr 0x2445520, size 0x58, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAsync, addr 0x2445578, size 0x15c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  constexpr int64_t const& __cordl_internal_get__currentPosition() const;

  constexpr int64_t& __cordl_internal_get__currentPosition();

  constexpr int64_t const& __cordl_internal_get__size() const;

  constexpr int64_t& __cordl_internal_get__size();

  constexpr void __cordl_internal_set__currentPosition(int64_t value);

  constexpr void __cordl_internal_set__size(int64_t value);

  /// @brief Method <>n__0, addr 0x24456e4, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* __n__0(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method .ctor, addr 0x24454f0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* baseStream, int64_t size);

  /// @brief Method get_Length, addr 0x24456d4, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x24456dc, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_RemainingSize, addr 0x2445514, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_RemainingSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartialReadOnlyWrapperStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartialReadOnlyWrapperStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartialReadOnlyWrapperStream(PartialReadOnlyWrapperStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartialReadOnlyWrapperStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartialReadOnlyWrapperStream(PartialReadOnlyWrapperStream const&) = delete;

  /// @brief Field _currentPosition, offset: 0x30, size: 0x8, def value: None
  int64_t ____currentPosition;

  /// @brief Field _size, offset: 0x38, size: 0x8, def value: None
  int64_t ____size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream, ____currentPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream, ____size) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::PartialReadOnlyWrapperStream*, "Amazon.Runtime.Internal.Util", "PartialReadOnlyWrapperStream");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__PartialReadOnlyWrapperStream___ReadAsync_d__6, "Amazon.Runtime.Internal.Util", "PartialReadOnlyWrapperStream/<ReadAsync>d__6");
