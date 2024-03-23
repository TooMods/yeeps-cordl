#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_tts_utterance_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_short;
}
namespace Unity::Services::Vivox {
class SWIGTYPE_p_vx_tts_utterance_impl;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_tts_utterance_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_tts_utterance_t);
// Type: Unity.Services.Vivox::vx_tts_utterance_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_tts_utterance_t*
class CORDL_TYPE vx_tts_utterance_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_num_channels, put = set_num_channels)) int32_t num_channels;

  __declspec(property(get = get_num_frames, put = set_num_frames)) int32_t num_frames;

  __declspec(property(get = get_sample_rate, put = set_sample_rate)) int32_t sample_rate;

  __declspec(property(get = get_speech_buffer, put = set_speech_buffer))::Unity::Services::Vivox::SWIGTYPE_p_short* speech_buffer;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_utterance_obj))::Unity::Services::Vivox::SWIGTYPE_p_vx_tts_utterance_impl* utterance_obj;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x16d073c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x16d0848, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x16d07a8, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_tts_utterance_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_tts_utterance_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x16d0e68, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x16d0590, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x16d05e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_tts_utterance_t* obj);

  /// @brief Method get_num_channels, addr 0x16d0e08, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_num_channels();

  /// @brief Method get_num_frames, addr 0x16d0d38, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_num_frames();

  /// @brief Method get_sample_rate, addr 0x16d0c68, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_sample_rate();

  /// @brief Method get_speech_buffer, addr 0x16d0b24, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_short* get_speech_buffer();

  /// @brief Method get_utterance_obj, addr 0x16d09c8, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::SWIGTYPE_p_vx_tts_utterance_impl* get_utterance_obj();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_num_channels, addr 0x16d0d98, size 0x70, virtual false, abstract: false, final false
  inline void set_num_channels(int32_t value);

  /// @brief Method set_num_frames, addr 0x16d0cc8, size 0x70, virtual false, abstract: false, final false
  inline void set_num_frames(int32_t value);

  /// @brief Method set_sample_rate, addr 0x16d0bf8, size 0x70, virtual false, abstract: false, final false
  inline void set_sample_rate(int32_t value);

  /// @brief Method set_speech_buffer, addr 0x16d0a9c, size 0x88, virtual false, abstract: false, final false
  inline void set_speech_buffer(::Unity::Services::Vivox::SWIGTYPE_p_short* value);

  /// @brief Method swigRelease, addr 0x16d0660, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_tts_utterance_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_tts_utterance_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_tts_utterance_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_tts_utterance_t(vx_tts_utterance_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_tts_utterance_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_tts_utterance_t(vx_tts_utterance_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_tts_utterance_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_tts_utterance_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_tts_utterance_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_tts_utterance_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_tts_utterance_t*, "Unity.Services.Vivox", "vx_tts_utterance_t");
