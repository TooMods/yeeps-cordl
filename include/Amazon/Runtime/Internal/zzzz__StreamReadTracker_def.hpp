#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamReadTracker)
namespace Amazon::Runtime {
class StreamTransferProgressArgs;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class StreamReadTracker;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::StreamReadTracker);
// Type: Amazon.Runtime.Internal::StreamReadTracker
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::StreamReadTracker*
class CORDL_TYPE StreamReadTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* callback;

  /// @brief Field contentLength, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_contentLength, put = __cordl_internal_set_contentLength)) int64_t contentLength;

  /// @brief Field progressUpdateInterval, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_progressUpdateInterval, put = __cordl_internal_set_progressUpdateInterval)) int64_t progressUpdateInterval;

  /// @brief Field sender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sender, put = __cordl_internal_set_sender))::System::Object* sender;

  /// @brief Field totalBytesRead, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_totalBytesRead, put = __cordl_internal_set_totalBytesRead)) int64_t totalBytesRead;

  /// @brief Field totalIncrementTransferred, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_totalIncrementTransferred, put = __cordl_internal_set_totalIncrementTransferred)) int64_t totalIncrementTransferred;

  static inline ::Amazon::Runtime::Internal::StreamReadTracker* New_ctor(::System::Object* sender, ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* callback,
                                                                         int64_t contentLength, int64_t progressUpdateInterval);

  /// @brief Method ReadProgress, addr 0x23dbba0, size 0x114, virtual false, abstract: false, final false
  inline void ReadProgress(int32_t bytesRead);

  /// @brief Method UpdateProgress, addr 0x23dbcb4, size 0x2c, virtual false, abstract: false, final false
  inline void UpdateProgress(float_t progress);

  constexpr ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>*> const& __cordl_internal_get_callback() const;

  constexpr int64_t const& __cordl_internal_get_contentLength() const;

  constexpr int64_t& __cordl_internal_get_contentLength();

  constexpr int64_t const& __cordl_internal_get_progressUpdateInterval() const;

  constexpr int64_t& __cordl_internal_get_progressUpdateInterval();

  constexpr ::System::Object*& __cordl_internal_get_sender();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_sender() const;

  constexpr int64_t const& __cordl_internal_get_totalBytesRead() const;

  constexpr int64_t& __cordl_internal_get_totalBytesRead();

  constexpr int64_t const& __cordl_internal_get_totalIncrementTransferred() const;

  constexpr int64_t& __cordl_internal_get_totalIncrementTransferred();

  constexpr void __cordl_internal_set_callback(::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* value);

  constexpr void __cordl_internal_set_contentLength(int64_t value);

  constexpr void __cordl_internal_set_progressUpdateInterval(int64_t value);

  constexpr void __cordl_internal_set_sender(::System::Object* value);

  constexpr void __cordl_internal_set_totalBytesRead(int64_t value);

  constexpr void __cordl_internal_set_totalIncrementTransferred(int64_t value);

  /// @brief Method .ctor, addr 0x23dbb5c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* sender, ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* callback, int64_t contentLength, int64_t progressUpdateInterval);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamReadTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StreamReadTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StreamReadTracker(StreamReadTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StreamReadTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StreamReadTracker(StreamReadTracker const&) = delete;

  /// @brief Field sender, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___sender;

  /// @brief Field callback, offset: 0x18, size: 0x8, def value: None
  ::System::EventHandler_1<::Amazon::Runtime::StreamTransferProgressArgs*>* ___callback;

  /// @brief Field contentLength, offset: 0x20, size: 0x8, def value: None
  int64_t ___contentLength;

  /// @brief Field totalBytesRead, offset: 0x28, size: 0x8, def value: None
  int64_t ___totalBytesRead;

  /// @brief Field totalIncrementTransferred, offset: 0x30, size: 0x8, def value: None
  int64_t ___totalIncrementTransferred;

  /// @brief Field progressUpdateInterval, offset: 0x38, size: 0x8, def value: None
  int64_t ___progressUpdateInterval;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::StreamReadTracker, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::StreamReadTracker, ___sender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::StreamReadTracker, ___callback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::StreamReadTracker, ___contentLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::StreamReadTracker, ___totalBytesRead) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::StreamReadTracker, ___totalIncrementTransferred) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::StreamReadTracker, ___progressUpdateInterval) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::StreamReadTracker);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::StreamReadTracker*, "Amazon.Runtime.Internal", "StreamReadTracker");
