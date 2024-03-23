#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventStream_2)
namespace Amazon::Runtime::EventStreams::Internal {
class IEventStreamDecoder;
}
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class IEventStream_2;
}
namespace Amazon::Runtime::EventStreams {
template <typename T> class EventStreamEventReceivedArgs_1;
}
namespace Amazon::Runtime::EventStreams {
template <typename T> class EventStreamExceptionReceivedArgs_1;
}
namespace Amazon::Runtime::EventStreams {
class EventStreamMessage;
}
namespace Amazon::Runtime::EventStreams {
class IEventStreamMessage;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::EventStreams::Internal {
template <typename T, typename TE> class EventStream_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Runtime::EventStreams::Internal::EventStream_2);
// Type: Amazon.Runtime.EventStreams.Internal::EventStream`2
// SizeInfo { instance_size: 64, native_size: 57, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::EventStreams::Internal {
// cpp template
template <typename T, typename TE>
// Is value type: false
// CS Name: ::Amazon.Runtime.EventStreams.Internal::EventStream`2<T,TE>*
class CORDL_TYPE EventStream_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BufferSize, put = set_BufferSize)) int32_t BufferSize;

  __declspec(property(get = get_Decoder))::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* Decoder;

  __declspec(property(get = get_EventMapping))::System::Collections::Generic::IDictionary_2<::StringW, ::System::Func_2<::Amazon::Runtime::EventStreams::IEventStreamMessage*, T>*>* EventMapping;

  /// @brief Field EventReceived, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_EventReceived,
                      put = __cordl_internal_set_EventReceived))::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* EventReceived;

  __declspec(
      property(get = get_ExceptionMapping))::System::Collections::Generic::IDictionary_2<::StringW, ::System::Func_2<::Amazon::Runtime::EventStreams::IEventStreamMessage*, TE>*>* ExceptionMapping;

  /// @brief Field ExceptionReceived, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ExceptionReceived,
                      put = __cordl_internal_set_ExceptionReceived))::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* ExceptionReceived;

  __declspec(property(get = get_IsProcessing, put = set_IsProcessing)) bool IsProcessing;

  __declspec(property(get = get_NetworkStream))::System::IO::Stream* NetworkStream;

  /// @brief Field <BufferSize>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__BufferSize_k__BackingField, put = __cordl_internal_set__BufferSize_k__BackingField)) int32_t _BufferSize_k__BackingField;

  /// @brief Field <Decoder>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Decoder_k__BackingField,
                      put = __cordl_internal_set__Decoder_k__BackingField))::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* _Decoder_k__BackingField;

  /// @brief Field <NetworkStream>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__NetworkStream_k__BackingField, put = __cordl_internal_set__NetworkStream_k__BackingField))::System::IO::Stream* _NetworkStream_k__BackingField;

  /// @brief Field _disposed, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
  constexpr operator ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ConvertMessageToEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T ConvertMessageToEvent(::Amazon::Runtime::EventStreams::EventStreamMessage* eventStreamMessage);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>* New_ctor(::System::IO::Stream* stream);

  static inline ::Amazon::Runtime::EventStreams::Internal::EventStream_2<T, TE>* New_ctor(::System::IO::Stream* stream,
                                                                                          ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* eventStreamDecoder);

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Process();

  /// @brief Method ProcessLoop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessLoop();

  /// @brief Method ProcessLoop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessLoop(::System::Object* state);

  /// @brief Method ReadFromStream, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReadFromStream(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method StartProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StartProcessing();

  /// @brief Method WrapException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TE WrapException(::System::Exception* ex);

  /// @brief Method <Process>b__36_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Process_b__36_0();

  constexpr ::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>*& __cordl_internal_get_EventReceived();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>*> const& __cordl_internal_get_EventReceived() const;

  constexpr ::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>*& __cordl_internal_get_ExceptionReceived();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>*> const&
  __cordl_internal_get_ExceptionReceived() const;

  constexpr int32_t const& __cordl_internal_get__BufferSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__BufferSize_k__BackingField();

  constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*& __cordl_internal_get__Decoder_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder*> const& __cordl_internal_get__Decoder_k__BackingField() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get__NetworkStream_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__NetworkStream_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr void __cordl_internal_set_EventReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value);

  constexpr void __cordl_internal_set_ExceptionReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value);

  constexpr void __cordl_internal_set__BufferSize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Decoder_k__BackingField(::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* value);

  constexpr void __cordl_internal_set__NetworkStream_k__BackingField(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__disposed(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* eventStreamDecoder);

  /// @brief Method add_EventReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_EventReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value);

  /// @brief Method add_ExceptionReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_ExceptionReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value);

  /// @brief Method get_BufferSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_BufferSize();

  /// @brief Method get_Decoder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* get_Decoder();

  /// @brief Method get_EventMapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Func_2<::Amazon::Runtime::EventStreams::IEventStreamMessage*, T>*>* get_EventMapping();

  /// @brief Method get_ExceptionMapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Func_2<::Amazon::Runtime::EventStreams::IEventStreamMessage*, TE>*>* get_ExceptionMapping();

  /// @brief Method get_IsProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsProcessing();

  /// @brief Method get_NetworkStream, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_NetworkStream();

  /// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
  constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>* i___Amazon__Runtime__EventStreams__Internal__IEventStream_2_T_TE_() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_EventReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_EventReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* value);

  /// @brief Method remove_ExceptionReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_ExceptionReceived(::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* value);

  /// @brief Method set_BufferSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_BufferSize(int32_t value);

  /// @brief Method set_IsProcessing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_IsProcessing(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventStream_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventStream_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventStream_2(EventStream_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventStream_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventStream_2(EventStream_2 const&) = delete;

  /// @brief Field <BufferSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____BufferSize_k__BackingField;

  /// @brief Field <NetworkStream>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ____NetworkStream_k__BackingField;

  /// @brief Field <Decoder>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::EventStreams::Internal::IEventStreamDecoder* ____Decoder_k__BackingField;

  /// @brief Field EventReceived, offset: 0x28, size: 0x8, def value: None
  ::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamEventReceivedArgs_1<T>*>* ___EventReceived;

  /// @brief Field ExceptionReceived, offset: 0x30, size: 0x8, def value: None
  ::System::EventHandler_1<::Amazon::Runtime::EventStreams::EventStreamExceptionReceivedArgs_1<TE>*>* ___ExceptionReceived;

  /// @brief Field _disposed, offset: 0x38, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field ErrorHeaderMessageTypeValue offset 0xffffffff size 0x8
  static constexpr ::ConstString ErrorHeaderMessageTypeValue{ u"error" };

  /// @brief Field EventHeaderMessageTypeValue offset 0xffffffff size 0x8
  static constexpr ::ConstString EventHeaderMessageTypeValue{ u"event" };

  /// @brief Field ExceptionHeaderMessageTypeValue offset 0xffffffff size 0x8
  static constexpr ::ConstString ExceptionHeaderMessageTypeValue{ u"exception" };

  /// @brief Field HeaderErrorCode offset 0xffffffff size 0x8
  static constexpr ::ConstString HeaderErrorCode{ u":error-code" };

  /// @brief Field HeaderErrorMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString HeaderErrorMessage{ u":error-message" };

  /// @brief Field HeaderEventType offset 0xffffffff size 0x8
  static constexpr ::ConstString HeaderEventType{ u":event-type" };

  /// @brief Field HeaderExceptionType offset 0xffffffff size 0x8
  static constexpr ::ConstString HeaderExceptionType{ u":exception-type" };

  /// @brief Field HeaderMessageType offset 0xffffffff size 0x8
  static constexpr ::ConstString HeaderMessageType{ u":message-type" };

  /// @brief Field UnknownEventKey offset 0xffffffff size 0x8
  static constexpr ::ConstString UnknownEventKey{ u"===UNKNOWN===" };

  /// @brief Field WrappedErrorMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString WrappedErrorMessage{ u"Error." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::EventStreams::Internal
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Runtime::EventStreams::Internal::EventStream_2, "Amazon.Runtime.EventStreams.Internal", "EventStream`2");
