#ifndef PIFO_PIPELINE_H_
#define PIFO_PIPELINE_H_

enum class InputSource {
  EXTERNAL_INPUT,


};

class PIFOPipeline {
 public:
  /// Public tick method
  void tick(const uint32_t & tick) {
    /// Something like this:
    /// Tick every pipeline stage taking in inputs from the appropriate
    /// source, which is set up by the compiler.
  }

 private:
  /// Bank of pipeline stages
  std::vector<PipelineStage> stages_ = {};

  /// Vector of inputs to pipeline stages
  /// i.e. where do inputs to each of the stages enq and deq
  /// calls come from? External, previous stage, or the next stage
  std::vector<InputSource> stage_enq_input_src_ = {};

  /// Vector of deq inputs to pipeline stages
  /// i.e. where do deq inputs come from?
  std::vector<InputSource> stage_deq_input_src = {};

/// These three std::vectors above are constructed from the graphviz dot
/// file when the PIFO machine is set up once at the beginning of the sim.


  /// Scratchpad for outputs from each of the stages
  /// Used to feed inputs (if required) on the next clock tick
  std::vector<Optional<uint32_t>> stage_outputs_ = {};

  /// External inputs to the PIFO pipeline
  std::vector<??> external_inputs_ = {};
};

#endif  // PIFO_PIPELINE_H_
